# SFML PROJECT
1. Here is a collection of projects I've done in my journey of learning C++.

2. All projects are built using SFML(Simple and Fast Multimedia Library: https://www.sfml-dev.org)

3. In CMakeList.txt, I add this code below add_executable and replace with the project name:

    target_link_libraries(project_name sfml-graphics sfml-audio)

      find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

4. You may want to set up compiler path and C++ standard before hitting build project.
5. Feel free to use my code as an example of what a good coder should or should not do. 
6. My YouTuBe channel: https://www.youtube.com/channel/UCITwUDbeEqhE9-y8HEsRofg