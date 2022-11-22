#ifndef CHARACTER_CLASS_H
#define CHARACTER_CLASS_H

#include <godot_cpp/classes/character_body3d.hpp>

using namespace godot;

class Character : public CharacterBody3D {
    GDCLASS(Character, CharacterBody3D);

protected:
    static void _bind_methods();

public:
    Character();
    ~Character();
};

#endif // CHARACTER_CLASS_H
