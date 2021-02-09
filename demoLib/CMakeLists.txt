project(demoLib)

file (GLOB_RECURSE prj_includeFiles ${CMAKE_SOURCE_DIR}/include/${PROJECT_NAME}/*.h)
file (GLOB_RECURSE prj_headerFiles ${CMAKE_CURRENT_SOURCE_DIR}/*.h)
file (GLOB_RECURSE prj_srcFiles ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

add_library(${PROJECT_NAME} SHARED 
	${prj_includeFiles} 
	${prj_headerFiles} 
	${prj_srcFiles}
	)

target_include_directories(${PROJECT_NAME}
	PUBLIC 
	${CMAKE_SOURCE_DIR}/include
	${CMAKE_SOURCE_DIR}/include/${PROJECT_NAME})

find_package(Qt5 COMPONENTS Core Gui Widgets)
target_link_libraries(${PROJECT_NAME} 
	PUBLIC 
	Qt5::Core 
	Qt5::Gui
	Qt5::Widgets
	)

# release with debug info
target_compile_options(${PROJECT_NAME} PUBLIC $<$<CONFIG:Release>:/Zi>)
target_link_options(${PROJECT_NAME} PUBLIC $<$<CONFIG:Release>:/DEBUG>)

target_precompile_headers(${PROJECT_NAME} PRIVATE stdafx.h)