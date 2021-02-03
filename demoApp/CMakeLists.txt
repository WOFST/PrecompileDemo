project(demoApp)

add_executable (${PROJECT_NAME}
	main.cpp
)

target_link_libraries(${PROJECT_NAME} 
	PRIVATE 
	demoLib)
	
target_precompile_headers(${PROJECT_NAME} REUSE_FROM demoLib)