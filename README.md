# Base MVC project for development under Platformio
[![C++ Arduino](https://img.shields.io/badge/c%2B%2B-Arduino%20-red.svg)](https://www.arduino.cc/)
[![Platform](https://img.shields.io/badge/platform-platformio-orange.svg)](https://platformio.org/)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/c93897649d444454b97d841909065c83)](https://www.codacy.com?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Melkoroth/Base-MVC-for-Platformio&amp;utm_campaign=Badge_Grade)
[![Build Status](https://travis-ci.com/Melkoroth/Base-MVC-for-Platformio.svg?token=jLXVWnBdCix3QQKg7rsP&branch=master)](https://travis-ci.com/Melkoroth/Base-MVC-for-Platformio)

This is a barebones project used as base to develop projects under the Platformio ecosystem. Some features include:
* Implements the **Model-View-Controller** pattern.
* Built using **Platformio** folder structure. There are some different example configurations under [platformio.ini](platformio.ini)
* Uses **git submodules** for external libraries. To add them do ```git submodule init```[.gitmodules](.gitmodules)
* Is **Travis CI** enabled [.travis.yml](.travis.yml). There's also another Travis script that manually downloads external libraries instead of relying on git submodules [.travisExplicitLibraries.yml](.travisExplicitLibraries.yml)
