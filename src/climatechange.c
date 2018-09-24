#include "climatechange.h"

#include <stdlib.h>

// ░░░░░░░░▄▄▄▀▀▀▄▄███▄
//░░░░░▄▀▀░░░░░░░▐░▀██▌
//░░░▄▀░░░░▄▄███░▌▀▀░▀█
//░░▄█░░▄▀▀▒▒▒▒▒▄▐░░░░█▌
//░▐█▀▄▀▄▄▄▄▀▀▀▀▌░░░░░▐█▄
//░▌▄▄▀▀░░░░░░░░▌░░░░▄███████▄
//░░░░░░░░░░░░░▐░░░░▐███████████▄
//░░░░░░░░░░░░░▐░░░░▐█████████████▄
//░░░░░░le░░░░░░▀▄░░░▐██████████████▄
//░░░░toucan░░░░░░░▀▄▄████████████████▄
//░░░░░has░░░░░░░░░░░░░░░░█▀██████▀▀▀▀█▄
//░░░░arrived░░░░░░░░░░░░░▄▄▀▄▀░▀██▀▀▀▄▄▄▀█
//░░░░░░░░░░░░░░░░░░▄▀▀▀▀▀░░░░██▌
//░░░░░░░░░░░░░░░░░░░░░░░░░░▄▀▄▀

int main(int argc, char const *argv[]) {
  globe = geodesic_icosahedron(GLOBE_DETAIL);
  drawingBegin();
  while(!drawingShouldClose()) {
    drawingLoop();
  }
  drawingEnd();
  delete_mesh(globe);
  return EXIT_SUCCESS;
}

void earlyExit() {
  drawingEnd();
  delete_mesh(globe);
  exit(EXIT_FAILURE);
}
