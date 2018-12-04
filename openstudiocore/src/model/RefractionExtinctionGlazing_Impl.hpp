/***********************************************************************************************************************
*  OpenStudio(R), Copyright (c) 2008-2018, Alliance for Sustainable Energy, LLC. All rights reserved.
*
*  Redistribution and use in source and binary forms, with or without modification, are permitted provided that the
*  following conditions are met:
*
*  (1) Redistributions of source code must retain the above copyright notice, this list of conditions and the following
*  disclaimer.
*
*  (2) Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following
*  disclaimer in the documentation and/or other materials provided with the distribution.
*
*  (3) Neither the name of the copyright holder nor the names of any contributors may be used to endorse or promote products
*  derived from this software without specific prior written permission from the respective party.
*
*  (4) Other than as required in clauses (1) and (2), distributions in any form of modifications or other derivative works
*  may not use the "OpenStudio" trademark, "OS", "os", or any other confusingly similar designation without specific prior
*  written permission from Alliance for Sustainable Energy, LLC.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDER(S) AND ANY CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
*  INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
*  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER(S), ANY CONTRIBUTORS, THE UNITED STATES GOVERNMENT, OR THE UNITED
*  STATES DEPARTMENT OF ENERGY, NOR ANY OF THEIR EMPLOYEES, BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
*  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
*  USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
*  STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
*  ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
***********************************************************************************************************************/

#ifndef MODEL_REFRACTIONEXTINCTIONGLAZING_IMPL_HPP
#define MODEL_REFRACTIONEXTINCTIONGLAZING_IMPL_HPP

#include "ModelAPI.hpp"
#include "Glazing_Impl.hpp"

#include "../utilities/units/Quantity.hpp"
#include "../utilities/units/OSOptionalQuantity.hpp"

namespace openstudio {
namespace model {

namespace detail {

  /** RefractionExtinctionGlazing_Impl is a Glazing_Impl that is the implementation class for RefractionExtinctionGlazing.*/
  class MODEL_API RefractionExtinctionGlazing_Impl : public Glazing_Impl {

   public:
    /** @name Constructors and Destructors */
    //@{

    RefractionExtinctionGlazing_Impl(const IdfObject& idfObject,
                                     Model_Impl* model,
                                     bool keepHandle);

    RefractionExtinctionGlazing_Impl(const openstudio::detail::WorkspaceObject_Impl& other,
                                     Model_Impl* model,
                                     bool keepHandle);

    RefractionExtinctionGlazing_Impl(const RefractionExtinctionGlazing_Impl& other,
                                     Model_Impl* model,
                                     bool keepHandle);

    virtual ~RefractionExtinctionGlazing_Impl() {}

    //@}

    /** @name Virtual Methods */
    //@{

    virtual const std::vector<std::string>& outputVariableNames() const override;

    virtual IddObjectType iddObjectType() const override;

    //@}
    /** @name Getters */
    //@{

    double thickness() const override;

    double thermalConductivity() const;

    double thermalConductance() const;

    double thermalResistivity() const;

    double thermalResistance() const;

    double thermalTransmittance() const;

    virtual boost::optional<double> getVisibleTransmittance() const override;

    /** This model assumes that the front- and back-side properties are identical. */
    double visibleAbsorptance() const;

    virtual boost::optional<double> interiorVisibleAbsorptance() const override;

    virtual boost::optional<double> exteriorVisibleAbsorptance() const override;

    Quantity getThickness(bool returnIP=false) const;

    double solarIndexofRefraction() const;

    Quantity getSolarIndexofRefraction(bool returnIP=false) const;

    double solarExtinctionCoefficient() const;

    Quantity getSolarExtinctionCoefficient(bool returnIP=false) const;

    double visibleIndexofRefraction() const;

    Quantity getVisibleIndexofRefraction(bool returnIP=false) const;

    double visibleExtinctionCoefficient() const;

    Quantity getVisibleExtinctionCoefficient(bool returnIP=false) const;

    double infraredTransmittanceatNormalIncidence() const;

    Quantity getInfraredTransmittanceatNormalIncidence(bool returnIP=false) const;

    bool isInfraredTransmittanceatNormalIncidenceDefaulted() const;

    double infraredHemisphericalEmissivity() const;

    Quantity getInfraredHemisphericalEmissivity(bool returnIP=false) const;

    bool isInfraredHemisphericalEmissivityDefaulted() const;

    virtual double conductivity() const;

    virtual Quantity getConductivity(bool returnIP=false) const;

    virtual bool isConductivityDefaulted() const;

    virtual double dirtCorrectionFactorforSolarandVisibleTransmittance() const;

    virtual Quantity getDirtCorrectionFactorforSolarandVisibleTransmittance(bool returnIP=false) const;

    virtual bool isDirtCorrectionFactorforSolarandVisibleTransmittanceDefaulted() const;

    bool solarDiffusing() const;

    bool isSolarDiffusingDefaulted() const;

    //@}
    /** @name Setters */
    //@{

    bool setThermalConductivity(double value);

    bool setThermalConductance(double value);

    bool setThermalResistivity(double value);

    bool setThermalResistance(double value);

    bool setThermalTransmittance(double value);

    bool setThickness(double thickness) override;

    bool setThickness(const Quantity& thickness);

    bool setSolarIndexofRefraction(double solarIndexofRefraction);

    bool setSolarIndexofRefraction(const Quantity& solarIndexofRefraction);

    bool setSolarExtinctionCoefficient(double solarExtinctionCoefficient);

    bool setSolarExtinctionCoefficient(const Quantity& solarExtinctionCoefficient);

    bool setVisibleIndexofRefraction(double visibleIndexofRefraction);

    bool setVisibleIndexofRefraction(const Quantity& visibleIndexofRefraction);

    bool setVisibleExtinctionCoefficient(double visibleExtinctionCoefficient);

    bool setVisibleExtinctionCoefficient(const Quantity& visibleExtinctionCoefficient);

    bool setInfraredTransmittanceatNormalIncidence(double infraredTransmittanceatNormalIncidence);

    bool setInfraredTransmittanceatNormalIncidence(const Quantity& infraredTransmittanceatNormalIncidence);

    void resetInfraredTransmittanceatNormalIncidence();

    bool setInfraredHemisphericalEmissivity(double infraredHemisphericalEmissivity);

    bool setInfraredHemisphericalEmissivity(const Quantity& infraredHemisphericalEmissivity);

    void resetInfraredHemisphericalEmissivity();

    virtual bool setConductivity(double conductivity);

    virtual bool setConductivity(const Quantity& conductivity);

    virtual void resetConductivity();

    virtual bool setDirtCorrectionFactorforSolarandVisibleTransmittance(double dirtCorrectionFactorforSolarandVisibleTransmittance);

    virtual bool setDirtCorrectionFactorforSolarandVisibleTransmittance(const Quantity& dirtCorrectionFactorforSolarandVisibleTransmittance);

    virtual void resetDirtCorrectionFactorforSolarandVisibleTransmittance();

    bool setSolarDiffusing(bool solarDiffusing);

    void resetSolarDiffusing();

    //@}
    /** @name Other */
    //@{

    //@}
   protected:
   private:
    REGISTER_LOGGER("openstudio.model.RefractionExtinctionGlazing");

    openstudio::Quantity thickness_SI() const;
    openstudio::Quantity thickness_IP() const;
    openstudio::Quantity solarIndexofRefraction_SI() const;
    openstudio::Quantity solarIndexofRefraction_IP() const;
    openstudio::Quantity solarExtinctionCoefficient_SI() const;
    openstudio::Quantity solarExtinctionCoefficient_IP() const;
    openstudio::Quantity visibleIndexofRefraction_SI() const;
    openstudio::Quantity visibleIndexofRefraction_IP() const;
    openstudio::Quantity visibleExtinctionCoefficient_SI() const;
    openstudio::Quantity visibleExtinctionCoefficient_IP() const;
    openstudio::Quantity infraredTransmittanceatNormalIncidence_SI() const;
    openstudio::Quantity infraredTransmittanceatNormalIncidence_IP() const;
    openstudio::Quantity infraredHemisphericalEmissivity_SI() const;
    openstudio::Quantity infraredHemisphericalEmissivity_IP() const;
    openstudio::Quantity conductivity_SI() const;
    openstudio::Quantity conductivity_IP() const;
    openstudio::Quantity dirtCorrectionFactorforSolarandVisibleTransmittance_SI() const;
    openstudio::Quantity dirtCorrectionFactorforSolarandVisibleTransmittance_IP() const;
  };

} // detail

} // model
} // openstudio

#endif // MODEL_REFRACTIONEXTINCTIONGLAZING_IMPL_HPP
