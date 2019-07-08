# Base MVC project for development under Platformio
[![C++ Arduino](https://img.shields.io/badge/c%2B%2B-Arduino%20-red.svg)](https://docs.platformio.org/en/latest/platforms/espressif32.html)
[![Platform](https://img.shields.io/badge/platform-platformio-orange.svg)](https://platformio.org/)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/f7fb4cfed44441b188912c8f1cb010f2)](https://www.codacy.com?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Melkoroth/HLocky&amp;utm_campaign=Badge_Grade)
[![Build Status](https://travis-ci.com/Melkoroth/Base-MVC-for-Platformio.svg?token=jLXVWnBdCix3QQKg7rsP&branch=master)

This is a barebones project used as base to develop projects under the Platformio ecosystem. Some features include:
* Implements the **Model-View-Controller** pattern.
* Built using **Platformio** folder structure. There are some different example configurations under (platformio.ini)[platformio.ini]
* Is **Travis CI** enabled and downloads external libraries. See (.travis.yml)[.travis.yml]
* Uses **git submodules** for external libraries. To add them do ```git submodule init```(.gitmodules)[.gitmodules]
