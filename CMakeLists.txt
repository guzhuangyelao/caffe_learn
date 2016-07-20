cmake_minimum_required(VERSION 3.5)
project(caffe_learn)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES proto_demo/proto_demo.cpp proto_demo/tutorial.pb.h proto_demo/tutorial.pb.cc)
add_executable(proto_demo ${SOURCE_FILES})
target_link_libraries(proto_demo
    protobuf)