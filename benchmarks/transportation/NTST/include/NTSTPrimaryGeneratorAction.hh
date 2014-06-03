//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
// $Id: NTSTPrimaryGeneratorAction.hh,v 1.2 2007-10-26 09:51:29 gcosmo Exp $
// GEANT4 tag $Name: not supported by cvs2svn $
// 
// NTSTPrimaryGeneratorAction instantiates each of the allowed
// generators and invokes the one specified by the messenger
//

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

#ifndef NTSTPrimaryGeneratorAction_hh
#define NTSTPrimaryGeneratorAction_hh 1

#include "G4VUserPrimaryGeneratorAction.hh"

#include "globals.hh"

class G4Event;
class NTSTPrimaryGeneratorMessenger;

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

class NTSTPrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction
{
public:

  NTSTPrimaryGeneratorAction();
  virtual ~NTSTPrimaryGeneratorAction();
  void GeneratePrimaries(G4Event* event);
  void Print(const G4Event*) const;

private:
  NTSTPrimaryGeneratorMessenger* messenger;
};

#endif




