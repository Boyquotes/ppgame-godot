#include "ppcharacter.h"

PPCharacter::PPCharacter() {
    print_line("ppcharacter::ppcharacter()");
}

PPCharacter::~PPCharacter() {
    print_line("ppcharacter::~ppcharacter()");
}

void PPCharacter::_notification(int p_notification)
{
    print_line("ppcharacter::_notification->%d", p_notification);
}
