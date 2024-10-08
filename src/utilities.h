#pragma once

#include <algorithm>
#include <istream>
#include <iterator>
#include <ostream>
#include <sstream>
#include <string>
#include <vector>

#include "glm/glm.hpp"

#define PI_OVER_FOUR 0.7853981633974483096156608458198757210493f
#define PI_OVER_TWO 1.5707963267948966192313216916397514420986f
#define PI 3.1415926535897932384626422832795028841971f
#define TWO_PI 6.2831853071795864769252867665590057683943f
#define SQRT_OF_ONE_THIRD 0.5773502691896257645091487805019574556476f
#define EPSILON 0.00001f

class GuiDataContainer {
 public:
  GuiDataContainer() : TracedDepth(0) {}
  int TracedDepth;

  bool sortMaterials = true;
  bool compactPaths = true;
  bool antiAliasing = true;
  int denoiseInterval = 1;
  bool showNormals = false;
  bool showAlbedos = false;
  bool enableBVC = false;
  float lensRadius = 0.0f;
  float focalDistance = 0.0f;
};

namespace utilityCore {
extern float clamp(float f, float min, float max);
extern bool replaceString(std::string& str, const std::string& from, const std::string& to);
extern glm::vec3 clampRGB(glm::vec3 color);
extern bool epsilonCheck(float a, float b);
extern std::vector<std::string> tokenizeString(std::string str);
extern glm::mat4 buildTransformationMatrix(glm::vec3 translation, glm::vec3 rotation, glm::vec3 scale);
extern std::string convertIntToString(int number);
extern std::istream& safeGetline(std::istream& is, std::string& t);  // Thanks to http://stackoverflow.com/a/6089413
}  // namespace utilityCore
