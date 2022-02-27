// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved
//
// Created by Aidan Lalonde-Novales
// Created on 2022-02-25
// This is a program that calculates the area of
// a circle with a radius of 15mm

#include <iostream>
#include <cmath>

int main() {
  std::cout << "A circle with a radius of" << std::endl;
  std::cout << "15 mm will have the following:" << std::endl;
  std::cout << std::endl;
  std::cout << "Perimeter of " << (2 * M_PI * 15) << " mm." << std::endl;
  std::cout << "Area of " << (M_PI * pow(15, 2)) << " mm²." << std::endl;
  std::cout << std::endl;
  std::cout << "Done." << std::endl;
}
