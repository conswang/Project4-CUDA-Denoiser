#pragma once

#include <vector>
#include "scene.h"

void pathtraceInit(Scene *scene);
void pathtraceFree();
void pathtrace(int frame, int iteration);
void showGBuffer(uchar4 *pbo);
void showImage(uchar4 *pbo, int iter);
void denoiseAndWriteToPbo(uchar4* pbo, int iteration, int filterSize, float colorWeight, float normalWeight, float positionWeight, glm::ivec2 blockSize);
void denoiseGaussianAndWriteToPbo(
  uchar4* pbo,
  int pathtraceIter,
  float colorWeight,
  float normalWeight,
  float positionWeight
);