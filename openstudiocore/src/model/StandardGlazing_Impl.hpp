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

#ifndef MODEL_STANDARDGLAZING_IMPL_HPP
#define MODEL_STANDARDGLAZING_IMPL_HPP

#include "ModelAPI.hpp"
#include "Glazing_Impl.hpp"

#include "../utilities/units/Quantity.hpp"
#include "../utilities/units/OSOptionalQuantity.hpp"

namespace openstudio {
namespace model {

class MaterialPropertyGlazingSpectralData;

namespace detail {

  /** StandardGlazing_Impl is a Glazing_Impl that is the implementation class for StandardGlazing.*/
  class MODEL_API StandardGlazing_Impl : public Glazing_Impl {

   public:
    /** @name Constructors and Destructors */
    //@{

    StandardGlazing_Impl(const IdfObject& idfObject,
                         Model_Impl* model,
                         bool keepHandle);

    StandardGlazing_Impl(const openstudio::detail::WorkspaceObject_Impl& other,
                         Model_Impl* model,
                         bool keepHandle);

    StandardGlazing_Impl(const StandardGlazing_Impl& other,
                         Model_Impl* model,
                         bool keepHandle);

    virtual ~StandardGlazing_Impl() {}

    //@}

    /** @name Virtual Methods */
    //@{

    virtual const std::vector<std::string>& outputVariableNames() const override;

    virtual IddObjectType iddObjectType() const override;

    //@}
    /** @name Getters */
    //@{

    std::string opticalDataType() const;

    boost::optional<std::string> windowGlassSpectralDataSetName() const;

    boost::optional<MaterialPropertyGlazingSpectralData> windowGlassSpectralDataSet() const;

    /** Get the thickness of the material. */
    virtual double thickness() const override;

    double solarTransmittance() const;

    Quantity getThickness(bool returnIP=false) const;

    boost::optional<double> solarTransmittanceatNormalIncidence() const;

    OSOptionalQuantity getSolarTransmittanceatNormalIncidence(bool returnIP=false) const;

    boost::optional<double> frontSideSolarReflectanceatNormalIncidence() const;

    OSOptionalQuantity getFrontSideSolarReflectanceatNormalIncidence(bool returnIP=false) const;

    boost::optional<double> backSideSolarReflectanceatNormalIncidence() const;

    OSOptionalQuantity getBackSideSolarReflectanceatNormalIncidence(bool returnIP=false) const;

    virtual boost::optional<double> getVisibleTransmittance() const override;

    boost::optional<double> visibleTransmittanceatNormalIncidence() const;

    OSOptionalQuantity getVisibleTransmittanceatNormalIncidence(bool returnIP=false) const;

    boost::optional<double> frontSideVisibleReflectanceatNormalIncidence() const;

    OSOptionalQuantity getFrontSideVisibleReflectanceatNormalIncidence(bool returnIP=false) const;

    boost::optional<double> backSideVisibleReflectanceatNormalIncidence() const;

    OSOptionalQuantity getBackSideVisibleReflectanceatNormalIncidence(bool returnIP=false) const;

    double infraredTransmittance() const;

    double infraredTransmittanceatNormalIncidence() const;

    Quantity getInfraredTransmittanceatNormalIncidence(bool returnIP=false) const;

    bool isInfraredTransmittanceatNormalIncidenceDefaulted() const;

    double frontSideInfraredHemisphericalEmissivity() const;

    Quantity getFrontSideInfraredHemisphericalEmissivity(bool returnIP=false) const;

    bool isFrontSideInfraredHemisphericalEmissivityDefaulted() const;

    double backSideInfraredHemisphericalEmissivity() const;

    Quantity getBackSideInfraredHemisphericalEmissivity(bool returnIP=false) const;

    bool isBackSideInfraredHemisphericalEmissivityDefaulted() const;

    /** The conductivitiy of the material in W/m*K. */
    double thermalConductivity() const;

    double conductivity() const;

    Quantity getConductivity(bool returnIP=false) const;

    bool isConductivityDefaulted() const;

    double dirtCorrectionFactorforSolarandVisibleTransmittance() const;

    Quantity getDirtCorrectionFactorforSolarandVisibleTransmittance(bool returnIP=false) const;

    bool isDirtCorrectionFactorforSolarandVisibleTransmittanceDefaulted() const;

    bool solarDiffusing() const;

    bool isSolarDiffusingDefaulted() const;

    //@}
    /** @name Setters */
    //@{

    bool setOpticalDataType(std::string opticalDataType);

    bool setWindowGlassSpectralDataSetName(boost::optional<std::string> windowGlassSpectralDataSetName);
    void resetWindowGlassSpectralDataSetName();

    bool setWindowGlassSpectralDataSet(const MaterialPropertyGlazingSpectralData& spectralData);
    void resetWindowGlassSpectralDataSet();

    /** Set thickness to value (m). */
    virtual bool setThickness(double value) override;

    bool setThickness(const Quantity& thickness);

    bool setSolarTransmittance(double value);

    bool setSolarTransmittanceatNormalIncidence(boost::optional<double> solarTransmittanceatNormalIncidence);

    bool setSolarTransmittanceatNormalIncidence(const OSOptionalQuantity& solarTransmittanceatNormalIncidence);

    void resetSolarTransmittanceatNormalIncidence();

    bool setFrontSideSolarReflectanceatNormalIncidence(boost::optional<double> frontSideSolarReflectanceatNormalIncidence);

    bool setFrontSideSolarReflectanceatNormalIncidence(const OSOptionalQuantity& frontSideSolarReflectanceatNormalIncidence);

    void resetFrontSideSolarReflectanceatNormalIncidence();

    bool setBackSideSolarReflectanceatNormalIncidence(boost::optional<double> backSideSolarReflectanceatNormalIncidence);

    bool setBackSideSolarReflectanceatNormalIncidence(const OSOptionalQuantity& backSideSolarReflectanceatNormalIncidence);

    void resetBackSideSolarReflectanceatNormalIncidence();

    bool setVisibleTransmittance(double value);

    bool setVisibleTransmittanceatNormalIncidence(boost::optional<double> visibleTransmittanceatNormalIncidence);

    bool setVisibleTransmittanceatNormalIncidence(const OSOptionalQuantity& visibleTransmittanceatNormalIncidence);

    void resetVisibleTransmittanceatNormalIncidence();

    bool setFrontSideVisibleReflectanceatNormalIncidence(boost::optional<double> frontSideVisibleReflectanceatNormalIncidence);

    bool setFrontSideVisibleReflectanceatNormalIncidence(const OSOptionalQuantity& frontSideVisibleReflectanceatNormalIncidence);

    void resetFrontSideVisibleReflectanceatNormalIncidence();

    bool setBackSideVisibleReflectanceatNormalIncidence(boost::optional<double> backSideVisibleReflectanceatNormalIncidence);

    bool setBackSideVisibleReflectanceatNormalIncidence(const OSOptionalQuantity& backSideVisibleReflectanceatNormalIncidence);

    void resetBackSideVisibleReflectanceatNormalIncidence();

    bool setInfraredTransmittance(double value);

    bool setInfraredTransmittanceatNormalIncidence(double infraredTransmittanceatNormalIncidence);

    bool setInfraredTransmittanceatNormalIncidence(const Quantity& infraredTransmittanceatNormalIncidence);

    void resetInfraredTransmittanceatNormalIncidence();

    bool setFrontSideInfraredHemisphericalEmissivity(double frontSideInfraredHemisphericalEmissivity);

    bool setFrontSideInfraredHemisphericalEmissivity(const Quantity& frontSideInfraredHemisphericalEmissivity);

    void resetFrontSideInfraredHemisphericalEmissivity();

    bool setBackSideInfraredHemisphericalEmissivity(double backSideInfraredHemisphericalEmissivity);

    bool setBackSideInfraredHemisphericalEmissivity(const Quantity& backSideInfraredHemisphericalEmissivity);

    void resetBackSideInfraredHemisphericalEmissivity();

    /** Sets the conductivity of the material in W/m*K, if possible. */
    bool setThermalConductivity(double value);

    bool setConductivity(double conductivity);

    bool setConductivity(const Quantity& conductivity);

    void resetConductivity();

    bool setDirtCorrectionFactorforSolarandVisibleTransmittance(double dirtCorrectionFactorforSolarandVisibleTransmittance);

    bool setDirtCorrectionFactorforSolarandVisibleTransmittance(const Quantity& dirtCorrectionFactorforSolarandVisibleTransmittance);

    void resetDirtCorrectionFactorforSolarandVisibleTransmittance();

    bool setSolarDiffusing(bool solarDiffusing);

    void resetSolarDiffusing();

    //@}
    /** @name Other */
    //@{

    /** The conductance of the material in W/m^2*K. */
    double thermalConductance() const;

    /** The resistivity of the material in m*K/W. */
    double thermalResistivity() const;

    /** The resistance of the material in m^2*K/W. */
    double thermalResistance() const;

    double interiorVisibleReflectance() const;

    double exteriorVisibleReflectance() const;

    virtual boost::optional<double> interiorVisibleAbsorptance() const override;

    virtual boost::optional<double> exteriorVisibleAbsorptance() const override;

    /** Sets the conductance of the material in W/m^2*K, if possible. */
    bool setThermalConductance(double value);

    /** Sets the resistivity of the material in m*K/W, if possible. */
    bool setThermalResistivity(double value);

    /** Sets the resistance of the material in m^2*K/W, if possible. */
    bool setThermalResistance(double value);

    //@}
   protected:
   private:
    REGISTER_LOGGER("openstudio.model.StandardGlazing");

    std::vector<std::string> opticalDataTypeValues() const;
    openstudio::Quantity thickness_SI() const;
    openstudio::Quantity thickness_IP() const;
    openstudio::OSOptionalQuantity solarTransmittanceatNormalIncidence_SI() const;
    openstudio::OSOptionalQuantity solarTransmittanceatNormalIncidence_IP() const;
    openstudio::OSOptionalQuantity frontSideSolarReflectanceatNormalIncidence_SI() const;
    openstudio::OSOptionalQuantity frontSideSolarReflectanceatNormalIncidence_IP() const;
    openstudio::OSOptionalQuantity backSideSolarReflectanceatNormalIncidence_SI() const;
    openstudio::OSOptionalQuantity backSideSolarReflectanceatNormalIncidence_IP() const;
    openstudio::OSOptionalQuantity visibleTransmittanceatNormalIncidence_SI() const;
    openstudio::OSOptionalQuantity visibleTransmittanceatNormalIncidence_IP() const;
    openstudio::OSOptionalQuantity frontSideVisibleReflectanceatNormalIncidence_SI() const;
    openstudio::OSOptionalQuantity frontSideVisibleReflectanceatNormalIncidence_IP() const;
    openstudio::OSOptionalQuantity backSideVisibleReflectanceatNormalIncidence_SI() const;
    openstudio::OSOptionalQuantity backSideVisibleReflectanceatNormalIncidence_IP() const;
    openstudio::Quantity infraredTransmittanceatNormalIncidence_SI() const;
    openstudio::Quantity infraredTransmittanceatNormalIncidence_IP() const;
    openstudio::Quantity frontSideInfraredHemisphericalEmissivity_SI() const;
    openstudio::Quantity frontSideInfraredHemisphericalEmissivity_IP() const;
    openstudio::Quantity backSideInfraredHemisphericalEmissivity_SI() const;
    openstudio::Quantity backSideInfraredHemisphericalEmissivity_IP() const;
    openstudio::Quantity conductivity_SI() const;
    openstudio::Quantity conductivity_IP() const;
    openstudio::Quantity dirtCorrectionFactorforSolarandVisibleTransmittance_SI() const;
    openstudio::Quantity dirtCorrectionFactorforSolarandVisibleTransmittance_IP() const;
  };

} // detail

} // model
} // openstudio

#endif // MODEL_STANDARDGLAZING_IMPL_HPP
