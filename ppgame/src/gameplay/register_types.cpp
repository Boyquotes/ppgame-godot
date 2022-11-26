#include "register_types.h"

#include "core/object/class_db.h"

#include "gameplay/player/ppcharacter.h"

void initialize_gameplay_module(ModuleInitializationLevel p_level) {
    if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
            return;
    }
    ClassDB::register_class<PPCharacter>();
}

void uninitialize_gameplay_module(ModuleInitializationLevel p_level) {
    if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
            return;
    }

}
