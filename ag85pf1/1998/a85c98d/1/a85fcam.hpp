
#pragma once
#ifndef A85FCAM_HPP //AG19850316Cppframebrary1PartCore1Demo1Applicationmeasurements
#define A85FCAM_HPP //AG19850316Cppframebrary1PartCore1Demo1Applicationmeasurements

#include <string>

#include "..//..//a85fcbc.hpp" //AG19850316Cppframebrary1PartCore1Applicationblank1Buildconfiguration

#include "..//..//a85f98cl//1//a85fclii.hpp" //AG19850316Cppframebrary1Part1998Corelibrary1Incrementingintegeridentificatorsgenerator
#include "..//..//a85f98cl//1//a85fclst.hpp" //AG19850316Cppframebrary1PartCore1Commaonlibrary1Insecondstimer

namespace AG85{

	namespace Cppframebrary1{

        namespace CppVersion1998{

            namespace Application{

                using namespace Corelibrary1;

                class ApplicationMeasurements{

                public:

                    enum InsecondstimersIds
                    {
                        TIMER_CONFIGURING
                        , TIMER_TOTAL
                        , countingStubTimerIds
                    } ;

                    Insecondstimer & GetGeneralInsecondstimersRef(enum InsecondstimersIds insecondstimersIds)
                    { 
                        return generalInsecondstimers[insecondstimersIds];
                    }

                    private:

                        Insecondstimer generalInsecondstimers[countingStubTimerIds];

                }; //class ApplicationMeasurements

            } //namespace Application

        } //namespace CppVersion1998{

	} //namespace Cppframebrary1

} //namespace AG85

#endif //A85FCAM_HPP - AG19850316Cppframebrary1PartCore1Demo1Applicationmeasurements

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
