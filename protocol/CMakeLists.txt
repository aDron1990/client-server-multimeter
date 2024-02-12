project(protocol)

file(GLOB sources "src/*.cpp" "src/*.hpp")
file(GLOB headers "include/*.hpp")
add_library(${PROJECT_NAME} SHARED ${sources} ${headers})
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)
target_include_directories(${PROJECT_NAME} PUBLIC "include/")