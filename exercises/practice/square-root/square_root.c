#include "square_root.h"

int square_root(int radicand) {
   int root = 1;
   while (root * root != radicand && (root)*(root) < radicand){
      root += 1;
   }
   return root;
}
