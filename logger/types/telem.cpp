/** \file telem.cpp
  * \brief The MagAO-X logger telemetery library
  * \author Jared R. Males (jaredmales@gmail.com)
  *
  * \ingroup logger_types_files
  *
  */
#include "../../../lib/flatlogs/include/flatlogs/flatlogs.hpp" // Has to be this path. It references the folder where the XWC build will install it.
#include "../generated/logTypes.hpp"

namespace MagAOX
{
namespace logger
{

// For each new telem formats add a line of the type:
// timespec <schema_filename>::lastRecord = {0,0};

} //namespace logger
} //namespace MagAOX