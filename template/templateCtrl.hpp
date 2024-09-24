/** \file templateCtrl.hpp
  * \brief The MagAO-X XXXXXX header file
  *
  * \ingroup templateCtrl_files
  */

#ifndef templateCtrl_hpp
#define templateCtrl_hpp


#include <XWCTK/XWCTK/libMagAOX.hpp>
#include <XWCTK/xwctk_git_version.h>

/** \defgroup templateCtrl
  * \brief The XXXXXX application to do YYYYYYY
  *
  * <a href="../handbook/operating/software/apps/XXXXXX.html">Application Documentation</a>
  *
  * \ingroup apps
  *
  */

/** \defgroup templateCtrl_files
  * \ingroup templateCtrl
  */

namespace MagAOX
{
namespace app
{

/// The MagAO-X xxxxxxxx
/** 
  * \ingroup templateCtrl
  */
class templateCtrl : public MagAOXApp<true>
{

   //Give the test harness access.
   friend class templateCtrl_test;

protected:

   /** \name Configurable Parameters
     *@{
     */
   
   //here add parameters which will be config-able at runtime
   
   ///@}




public:
   /// Default c'tor.
   templateCtrl();

   /// D'tor, declared and defined for noexcept.
   ~templateCtrl() noexcept
   {}

   virtual void setupConfig();

   /// Implementation of loadConfig logic, separated for testing.
   /** This is called by loadConfig().
     */
   int loadConfigImpl( mx::app::appConfigurator & _config /**< [in] an application configuration from which to load values*/);

   virtual void loadConfig();

   /// Startup function
   /**
     *
     */
   virtual int appStartup();

   /// Implementation of the FSM for templateCtrl.
   /** 
     * \returns 0 on no critical error
     * \returns -1 on an error requiring shutdown
     */
   virtual int appLogic();

   /// Shutdown the app.
   /** 
     *
     */
   virtual int appShutdown();


};

templateCtrl::templateCtrl() : MagAOXApp(XWCTK_CURRENT_SHA1, XWCTK_REPO_MODIFIED)
{
   
   return;
}

void templateCtrl::setupConfig()
{
}

int templateCtrl::loadConfigImpl( mx::app::appConfigurator & _config )
{

   
   return 0;
}

void templateCtrl::loadConfig()
{
   loadConfigImpl(config);
}

int templateCtrl::appStartup()
{
   
   return 0;
}

int templateCtrl::appLogic()
{
   return 0;
}

int templateCtrl::appShutdown()
{
   return 0;
}

} //namespace app
} //namespace MagAOX

#endif //templateCtrl_hpp
