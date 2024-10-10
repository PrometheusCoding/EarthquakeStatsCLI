// COMP2811 Coursework 1: Quake class

#include <stdexcept>
#include "quake.hpp"

using namespace std;


Quake::Quake(const string& tm, double lat, double lon, double dep, double mag):
  time(tm), latitude(lat), longitude(lon), depth(dep), magnitude(mag)
{
  // Add validation code here
  if (lat < MIN_LATITUDE || lat > MAX_LATITUDE){
    throw invalid_argument("Latitude must be between -90 and 90");
  }

  if (lon < MIN_LONGITUDE || lon > MAX_LONGITUDE){
    throw invalid_argument("Longitude must be between -180 and 180");
  }

  if (dep < 0 || mag < 0){
    throw invalid_argument("Depth or Magnitude can be less than 0");
  }

}


ostream& operator<<(ostream& out, const Quake& quake)
{
  return out << "Time: " << quake.getTime()
             << "\nLatitude: " << quake.getLatitude() << " deg"
             << "\nLongitude: " << quake.getLongitude() << " deg"
             << "\nDepth: " << quake.getDepth() << " km"
             << "\nMagnitude: " << quake.getMagnitude() << endl;
}
