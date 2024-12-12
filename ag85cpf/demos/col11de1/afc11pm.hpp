
#pragma once
#ifndef AFC11PM_1_HPP //AG19850316CppframebraryPartCoreLibraryCpp2011Demo1ProgramMeasurements
#define AFC11PM_1_HPP //AG19850316CppframebraryPartCoreLibraryCpp2011Demo1ProgramMeasurements

#include <string>

#include "afcdefco.hpp" //AG19850316CppframebraryCorelibraryCpp2011Demo1ProgramCppdefinesconfiguration

#include "..//..//libssrc//ag85cpfl//cpp2011//apfcol11//1//afclii11.hpp" //AG19850316CppframebraryPartCorelibrary1InstanceAtomicIncrementingintegeridentificatorsgeneratorCpp2011
#include "..//..//libssrc//ag85cpfl//cpp2011//apfcol11//1//afclnt11.hpp" //AG19850316CppframebraryPartCorelibrary1UptoinnanosecondstimerCpp2011

namespace AG85{

	namespace Cppframebrary{

        namespace CoreLibraryCpp2011Demo1{

            using namespace Corelibrary1::CppVersion2011;

            class ProgramMeasurements{

            public:

                enum UptonanosecondstimersIds
                {
                    TIMER_TOTAL
                    , countingStubTimerIds
                } ;

                Uptoinnanosecondstimer & GetGeneralUptoinnanosecondstimersRef(enum UptonanosecondstimersIds insecondstimersIds)
                { 
                    return generalUptoinnanosecondstimers[insecondstimersIds];
                }

                private:

                    Uptoinnanosecondstimer generalUptoinnanosecondstimers[countingStubTimerIds];

            }; //class ProgramMeasurements

        } //amespace CoreLibraryCpp2011Demo1

	} //namespace Cppframebrary

} //namespace AG85

#endif //AFC11PM_1_HPP - AG19850316CppframebraryPartCoreLibraryCpp2011Demo1ProgramMeasurements

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
