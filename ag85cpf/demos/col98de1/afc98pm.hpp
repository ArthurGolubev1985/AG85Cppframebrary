
#pragma once
#ifndef AFC98PM_1_HPP //AG19850316CppframebraryPartCoreLibraryCpp1998Demo1ProgramMeasurements
#define AFC98PM_1_HPP //AG19850316CppframebraryPartCoreLibraryCpp1998Demo1ProgramMeasurements

#include <string>

#include "afcdefco.hpp" //ApplicationCppdefinesconfiguration

#include "..//..//libssrc//ag85cpfl//cpp1998//apfcol98//1//afclii98.hpp" //AG19850316CppframebraryPartCorelibrary1IncrementingintegeridentificatorsgeneratorCpp1998
#include "..//..//libssrc//ag85cpfl//cpp1998//apfcol98//1//afclst98.hpp" //AG19850316CppframebraryPartCorelibrary1InsecondstimerCpp1998

namespace AG85{

	namespace Cppframebrary{

        namespace CoreLibraryCpp1998Demo1{

            using namespace Cppframebrary::Corelibrary1::CppVersion1998;

            class ProgramMeasurements{

            public:

                enum InsecondstimersIds
                {
                    TIMER_TOTAL
                    , countingStubTimerIds
                } ;

                Insecondstimer & GetGeneralInsecondstimersRef(enum InsecondstimersIds insecondstimersIds)
                { 
                    return generalInsecondstimers[insecondstimersIds];
                }

                private:

                    Insecondstimer generalInsecondstimers[countingStubTimerIds];

            }; //class ProgramMeasurements

        } //namespace CoreLibraryCpp1998Demo1

	} //namespace Cppframebrary

} //namespace AG85

#endif //AFC98PM_1_HPP - AG19850316CppframebraryPartCoreLibraryCpp1998Demo1ProgramMeasurements

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
