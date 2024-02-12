project(client)

file(GLOB sources "src/*.cpp" "src/*.hpp")
add_executable(${PROJECT_NAME} ${sources})
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)