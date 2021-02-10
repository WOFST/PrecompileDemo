project(demoApp)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

add_executable (${PROJECT_NAME}
	main.cpp
	MyWidget.h
	MyWidget.cpp
	stdafx.h
	stdafx.cpp
)

find_package(Qt5 COMPONENTS Widgets)
target_link_libraries(${PROJECT_NAME} 
	PRIVATE 
	demoLib)

# successful	
#target_precompile_headers(${PROJECT_NAME} PRIVATE "stdafx.h")

# link200
target_precompile_headers(${PROJECT_NAME} REUSE_FROM demoLib)