# SFML PROJECT
1. Here is a collection of all SFML projects I've done in my journey of learning C++ and SFML.
2. Feel free to use my code as an example of what a good coder should or should not do.
3. What else should I put here :) :) :) :) :)
4. In CMakeList.txt, I add this code below add_executable and replace with the project name:

    target_link_libraries(project_name sfml-graphics sfml-audio)

      find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)