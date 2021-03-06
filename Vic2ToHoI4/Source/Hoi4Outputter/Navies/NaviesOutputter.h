#ifndef NAVIES_OUTPUTTER
#define NAVIES_OUTPUTTER



#include "../../HOI4World/Navies/Navies.h"
#include <ostream>


namespace HoI4
{
void outputLegacyNavies(const Navies& navies, std::ostream& output);
void outputMtgNavies(const Navies& navies, std::ostream& output);
}



#endif // NAVIES_OUTPUTTER