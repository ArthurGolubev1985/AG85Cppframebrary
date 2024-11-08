
#pragma once
#ifndef A85FCAM_HPP //AG19850316Cppframebrary1PartCore1Demo1Applicationmeasurements
#define A85FCAM_HPP //AG19850316Cppframebrary1PartCore1Demo1Applicationmeasurements

#include <string>

#include "..//..//a85fcbc.hpp" //AG19850316Cppframebrary1PartCore1Applicationblank1Buildconfiguration

#include "..//..//..//1998//a85f98cl//1//a85fclii.hpp" //AG19850316Cppframebrary1PartCorelibrary1Incrementingintegeridentificatorsgenerator
#include "..//..//a85f11cl//1//a85fclnt.hpp" //AG19850316Cppframebrary1PartCore1Commaonlibrary1Uptonanosecondstimer

namespace AG85{

	namespace Cppframebrary1{

        namespace CppVersion2011{

            namespace Application{

                using namespace Corelibrary1;

                class ApplicationMeasurements{

                public:

                    enum UptonanosecondstimersIds
                    {
                        TIMER_CONFIGURING
                        , TIMER_TOTAL
                        , countingStubTimerIds
                    } ;

                    Uptoinnanosecondstimer & GetGeneralUptoinnanosecondstimersRef(enum UptonanosecondstimersIds insecondstimersIds)
                    { 
                        return generalUptoinnanosecondstimers[insecondstimersIds];
                    }

                    private:

                        Uptoinnanosecondstimer generalUptoinnanosecondstimers[countingStubTimerIds];

                }; //class ApplicationMeasurements

            } //namespace CppVersion2011

        } //amespace Application

	} //namespace Cppframebrary1

} //namespace AG85

#endif //A85FCAM_HPP - AG19850316Cppframebrary1PartCore1Demo1Applicationmeasurements

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// The file is a part of AG19850316 C++ Framebrary 1 (ag85cppframebrary1)
