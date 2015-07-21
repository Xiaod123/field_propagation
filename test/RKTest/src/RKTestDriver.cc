
/*	Include all the steppers  */

//#include "G4ExplicitEuler.hh"
//#include "VernerRK67.hh"
//#include "VernerRK56.hh"
//#include "VernerRK78.hh"
//#include "G4CashKarpRKF45.hh"
////#include "G4ClassicalRK4.hh"
//#include "G4SimpleHeum.hh"
//#include "DormandPrince745.hh"
//#include "BogackiShampine45.hh"
//#include "BogackiShampine23.hh"
//#include "FBogackiShampine45.hh"
//#include "FDormandPrince745.hh"
//#include "FDormandPrinceRK56.hh"
//#include "FVernerRK56.hh"


#include "G4ExactHelixStepper.hh"	//For exact UMF stepper
#include "RKTestDriver.hh"

template<class STEPPER>
G4MagInt_Driver *
SetDriver(/*std::string my_stepper_code,*/ G4Mag_UsualEqRhs *fEquation /*G4FieldTrack myTrack*/ ){
    
    G4double hminimum = 1.e-12;
    STEPPER *theStepper = new STEPPER(fEquation);
    G4MagInt_Driver *theDriver = new G4MagInt_Driver(hminimum, theStepper);
    return theDriver;
    
}

template <class STEPPER>
FSALMagInt_Driver *SetFSALDriver(G4Mag_UsualEqRhs *fEquation){
    G4double hminimum = 1.e-12;
    STEPPER *theStepper = new STEPPER(fEquation);
    FSALMagInt_Driver *theDriver = new FSALMagInt_Driver(hminimum, theStepper);
    return theDriver;
}