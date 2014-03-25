/* Autogenerated with Kurento Idl */

#include "CrowdDetectorOccupancy.hpp"
#include <JsonSerializer.hpp>

void
Serialize(kurento::CrowdDetectorOccupancy& event, JsonSerializer& s)
{
  s.Serialize("occupancyPercentage", event.occupancyPercentage);
  s.Serialize("occupancyLevel", event.occupancyLevel);
  s.Serialize("roiID", event.roiID);
  try {
    kurento::Media &parent = dynamic_cast<kurento::Media&> (event);

    Serialize(parent, s);
  } catch (std::bad_cast) {

  }
}
