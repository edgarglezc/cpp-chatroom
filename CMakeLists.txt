cmake_minimum_required(VERSION 3.16) # cmake version

project(ChatRoom) # Project name

set(CMAKE_CXX_STANDARD 17) # cpp standard

include_directories(include include/message) # path to .hpp dirs 

set(SOURCES
    src/User.cpp
    src/message/Message.cpp
    src/message/TextMessage.cpp
    src/message/ImageMessage.cpp
    src/message/VideoMessage.cpp
    src/MessageManager.cpp
    src/ChatRoom.cpp
) # path to source files

add_executable(client app/client/client.cpp) # Create client executable
add_executable(server app/server/server.cpp) # Create server executable
add_executable(main app/main.cpp ${SOURCES}) # Create main executable
