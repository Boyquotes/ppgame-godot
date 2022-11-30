#ifndef PP_CHARACTER_H
#define PP_CHARACTER_H

#include "scene/3d/physics_body_3d.h"

class PPCharacter : public CharacterBody3D {
    GDCLASS(PPCharacter, CharacterBody3D);

public:
    PPCharacter();
    ~PPCharacter();

protected:
    void _notification(int p_notification);

};

#endif // PP_CHARACTER_H