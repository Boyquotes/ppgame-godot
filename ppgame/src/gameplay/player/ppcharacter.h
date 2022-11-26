#ifndef PPCharacter_H
#define PPCharacter_H

#include "scene/3d/physics_body_3d.h"

class PPCharacter : public CharacterBody3D {
    GDCLASS(PPCharacter, CharacterBody3D);

public:
    PPCharacter();
    ~PPCharacter();

};

#endif // PPCharacter_H