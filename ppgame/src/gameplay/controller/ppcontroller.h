#ifndef PP_CONTROLLER_H
#define PP_CONTROLLER_H

#include "scene/3d/node_3d.h"

class PPController : public Node3D {
    GDCLASS(PPController, Node3D);

public:
    PPController();
    ~PPController();
};

#endif // PP_CONTROLLER_H