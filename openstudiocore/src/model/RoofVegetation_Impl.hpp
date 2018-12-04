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

#ifndef MODEL_ROOFVEGETATION_IMPL_HPP
#define MODEL_ROOFVEGETATION_IMPL_HPP

#include "ModelAPI.hpp"
#include "OpaqueMaterial_Impl.hpp"

#include "../utilities/units/Quantity.hpp"
#include "../utilities/units/OSOptionalQuantity.hpp"

namespace openstudio {
namespace model {

namespace detail {

  /** RoofVegetation_Impl is a OpaqueMaterial_Impl that is the implementation class for RoofVegetation.*/
  class MODEL_API RoofVegetation_Impl : public OpaqueMaterial_Impl {

   public:
    /** @name Constructors and Destructors */
    //@{

    RoofVegetation_Impl(const IdfObject& idfObject,
                        Model_Impl* model,
                        bool keepHandle);

    RoofVegetation_Impl(const openstudio::detail::WorkspaceObject_Impl& other,
                        Model_Impl* model,
                        bool keepHandle);

    RoofVegetation_Impl(const RoofVegetation_Impl& other,
                        Model_Impl* model,
                        bool keepHandle);

    virtual ~RoofVegetation_Impl() {}

    //@}

    /** @name Virtual Methods */
    //@{

    virtual const std::vector<std::string>& outputVariableNames() const override;

    virtual IddObjectType iddObjectType() const override;

    //@}
    /** @name Getters */
    //@{

    double heightofPlants() const;

    Quantity getHeightofPlants(bool returnIP=false) const;

    bool isHeightofPlantsDefaulted() const;

    double leafAreaIndex() const;

    Quantity getLeafAreaIndex(bool returnIP=false) const;

    bool isLeafAreaIndexDefaulted() const;

    double leafReflectivity() const;

    Quantity getLeafReflectivity(bool returnIP=false) const;

    bool isLeafReflectivityDefaulted() const;

    double leafEmissivity() const;

    Quantity getLeafEmissivity(bool returnIP=false) const;

    bool isLeafEmissivityDefaulted() const;

    double minimumStomatalResistance() const;

    Quantity getMinimumStomatalResistance(bool returnIP=false) const;

    bool isMinimumStomatalResistanceDefaulted() const;

    std::string soilLayerName() const;

    bool isSoilLayerNameDefaulted() const;

    std::string roughness() const;

    /** Get the thickness of the material. */
    virtual double thickness() const override;

    /** The conductivitiy of the material in W/m*K. */
    virtual double thermalConductivity() const override;

    /** The conductance of the material in W/m^2*K. */
    virtual double thermalConductance() const override;

    /** The resistivity of the material in m*K/W. */
    virtual double thermalResistivity() const override;

    /** The resistance of the material in m^2*K/W. */
    double thermalResistance() const override;

    /** Density of dry soil (kg/m^3). */
    double density() const;

    /** Specific heat of dry soil (J/kg*K). */
    double specificHeat() const;

    virtual double thermalTransmittance() const;

    virtual double thermalAbsorptance() const override;

    virtual boost::optional<double> thermalReflectance() const override;

    virtual double solarTransmittance() const;

    virtual double solarAbsorptance() const override;

    virtual boost::optional<double> solarReflectance() const override;

    virtual double visibleTransmittance() const;

    virtual double visibleAbsorptance() const override;

    virtual boost::optional<double> visibleReflectance() const override;

    /** Maximum moisture content of the soil layer by volume fraction. */
    double saturationVolumetricMoistureContent() const;

    double residualVolumetricMoistureContent() const;

    double initialVolumetricMoistureContent() const;

    bool isRoughnessDefaulted() const;

    Quantity getThickness(bool returnIP=false) const;

    bool isThicknessDefaulted() const;

    double conductivityofDrySoil() const;

    Quantity getConductivityofDrySoil(bool returnIP=false) const;

    bool isConductivityofDrySoilDefaulted() const;

    double densityofDrySoil() const;

    Quantity getDensityofDrySoil(bool returnIP=false) const;

    bool isDensityofDrySoilDefaulted() const;

    double specificHeatofDrySoil() const;

    Quantity getSpecificHeatofDrySoil(bool returnIP=false) const;

    bool isSpecificHeatofDrySoilDefaulted() const;

    Quantity getThermalAbsorptance(bool returnIP=false) const;

    bool isThermalAbsorptanceDefaulted() const;

    Quantity getSolarAbsorptance(bool returnIP=false) const;

    bool isSolarAbsorptanceDefaulted() const;

    Quantity getVisibleAbsorptance(bool returnIP=false) const;

    bool isVisibleAbsorptanceDefaulted() const;

    double saturationVolumetricMoistureContentoftheSoilLayer() const;

    Quantity getSaturationVolumetricMoistureContentoftheSoilLayer(bool returnIP=false) const;

    bool isSaturationVolumetricMoistureContentoftheSoilLayerDefaulted() const;

    double residualVolumetricMoistureContentoftheSoilLayer() const;

    Quantity getResidualVolumetricMoistureContentoftheSoilLayer(bool returnIP=false) const;

    bool isResidualVolumetricMoistureContentoftheSoilLayerDefaulted() const;

    double initialVolumetricMoistureContentoftheSoilLayer() const;

    Quantity getInitialVolumetricMoistureContentoftheSoilLayer(bool returnIP=false) const;

    bool isInitialVolumetricMoistureContentoftheSoilLayerDefaulted() const;

    std::string moistureDiffusionCalculationMethod() const;

    bool isMoistureDiffusionCalculationMethodDefaulted() const;

    //@}
    /** @name Setters */
    //@{

    bool setHeightOfPlants(double value);

    bool setLeafAreaIndex(double value);

    bool setLeafReflectivity(double value);

    bool setLeafEmissivity(double value);

    bool setMinimumStomatalResistance(double value);

    bool setSoilLayerName(const std::string& name);

    bool setRoughness(const std::string& value);

    /** Set thickness to value (m). */
    virtual bool setThickness(double value) override;

    /** Sets the conductivity of the material in W/m*K, if possible. */
    virtual bool setThermalConductivity(double value) override;

    /** Sets the conductance of the material in W/m^2*K, if possible. */
    virtual bool setThermalConductance(double value) override;

    /** Sets the resistivity of the material in m*K/W, if possible. */
    virtual bool setThermalResistivity(double value) override;

    /** Sets the resistance of the material in m^2*K/W, if possible. */
    virtual bool setThermalResistance(double value) override;

    /** Set density of dry soil (kg/m^3). */
    bool setDensity(double value);

    /** Set specific heat of dry soil (J/kg*K). */
    bool setSpecificHeat(double value);

    virtual bool setThermalTransmittance(double value);

    virtual bool setThermalAbsorptance(boost::optional<double> value);

    virtual bool setThermalReflectance(boost::optional<double> value) override;

    virtual bool setSolarTransmittance(double value);

    virtual bool setSolarAbsorptance(boost::optional<double> value) override;

    virtual bool setSolarReflectance(boost::optional<double> value) override;

    virtual bool setVisibleTransmittance(double value);

    virtual bool setVisibleAbsorptance(boost::optional<double> value) override;

    virtual bool setVisibleReflectance(boost::optional<double> value) override;

    /** Set the maximum moisture content of the soil layer by volume fraction. */
    bool setSaturationVolumetricMoistureContent(double value);

    bool setResidualVolumetricMoistureContent(double value);

    bool setInitialVolumetricMoistureContent(double value);

    bool setMoistureDiffusionCalculationMethod(const std::string& value);

    bool setHeightofPlants(double heightofPlants);

    bool setHeightofPlants(const Quantity& heightofPlants);

    void resetHeightofPlants();

    bool setLeafAreaIndex(const Quantity& leafAreaIndex);

    void resetLeafAreaIndex();

    bool setLeafReflectivity(const Quantity& leafReflectivity);

    void resetLeafReflectivity();

    bool setLeafEmissivity(const Quantity& leafEmissivity);

    void resetLeafEmissivity();

    bool setMinimumStomatalResistance(const Quantity& minimumStomatalResistance);

    void resetMinimumStomatalResistance();

    void resetSoilLayerName();

    void resetRoughness();

    bool setThickness(const Quantity& thickness);

    void resetThickness();

    bool setConductivityofDrySoil(double conductivityofDrySoil);

    bool setConductivityofDrySoil(const Quantity& conductivityofDrySoil);

    void resetConductivityofDrySoil();

    bool setDensityofDrySoil(double densityofDrySoil);

    bool setDensityofDrySoil(const Quantity& densityofDrySoil);

    void resetDensityofDrySoil();

    bool setSpecificHeatofDrySoil(double specificHeatofDrySoil);

    bool setSpecificHeatofDrySoil(const Quantity& specificHeatofDrySoil);

    void resetSpecificHeatofDrySoil();

    bool setThermalAbsorptance(double thermalAbsorptance) override;

    bool setThermalAbsorptance(const Quantity& thermalAbsorptance);

    void resetThermalAbsorptance();

    bool setSolarAbsorptance(double solarAbsorptance);

    bool setSolarAbsorptance(const Quantity& solarAbsorptance);

    void resetSolarAbsorptance();

    bool setVisibleAbsorptance(double visibleAbsorptance);

    bool setVisibleAbsorptance(const Quantity& visibleAbsorptance);

    void resetVisibleAbsorptance();

    bool setSaturationVolumetricMoistureContentoftheSoilLayer(double saturationVolumetricMoistureContentoftheSoilLayer);

    bool setSaturationVolumetricMoistureContentoftheSoilLayer(const Quantity& saturationVolumetricMoistureContentoftheSoilLayer);

    void resetSaturationVolumetricMoistureContentoftheSoilLayer();

    bool setResidualVolumetricMoistureContentoftheSoilLayer(double residualVolumetricMoistureContentoftheSoilLayer);

    bool setResidualVolumetricMoistureContentoftheSoilLayer(const Quantity& residualVolumetricMoistureContentoftheSoilLayer);

    void resetResidualVolumetricMoistureContentoftheSoilLayer();

    bool setInitialVolumetricMoistureContentoftheSoilLayer(double initialVolumetricMoistureContentoftheSoilLayer);

    bool setInitialVolumetricMoistureContentoftheSoilLayer(const Quantity& initialVolumetricMoistureContentoftheSoilLayer);

    void resetInitialVolumetricMoistureContentoftheSoilLayer();

    void resetMoistureDiffusionCalculationMethod();

    //@}
    /** @name Queries */
    //@{

    /** Energy it takes to raise the temperature of this material 1 K (J/m^2*K). Equal to
     *  specificHeat() * density() * thickness(). */
    virtual boost::optional<double> heatCapacity() const override;

    //@}
    /** @name Other */
    //@{

    //@}
   protected:
   private:
    REGISTER_LOGGER("openstudio.model.RoofVegetation");

    openstudio::Quantity heightofPlants_SI() const;
    openstudio::Quantity heightofPlants_IP() const;
    openstudio::Quantity leafAreaIndex_SI() const;
    openstudio::Quantity leafAreaIndex_IP() const;
    openstudio::Quantity leafReflectivity_SI() const;
    openstudio::Quantity leafReflectivity_IP() const;
    openstudio::Quantity leafEmissivity_SI() const;
    openstudio::Quantity leafEmissivity_IP() const;
    openstudio::Quantity minimumStomatalResistance_SI() const;
    openstudio::Quantity minimumStomatalResistance_IP() const;
    std::vector<std::string> roughnessValues() const;
    openstudio::Quantity thickness_SI() const;
    openstudio::Quantity thickness_IP() const;
    openstudio::Quantity conductivityofDrySoil_SI() const;
    openstudio::Quantity conductivityofDrySoil_IP() const;
    openstudio::Quantity densityofDrySoil_SI() const;
    openstudio::Quantity densityofDrySoil_IP() const;
    openstudio::Quantity specificHeatofDrySoil_SI() const;
    openstudio::Quantity specificHeatofDrySoil_IP() const;
    openstudio::Quantity thermalAbsorptance_SI() const;
    openstudio::Quantity thermalAbsorptance_IP() const;
    openstudio::Quantity solarAbsorptance_SI() const;
    openstudio::Quantity solarAbsorptance_IP() const;
    openstudio::Quantity visibleAbsorptance_SI() const;
    openstudio::Quantity visibleAbsorptance_IP() const;
    openstudio::Quantity saturationVolumetricMoistureContentoftheSoilLayer_SI() const;
    openstudio::Quantity saturationVolumetricMoistureContentoftheSoilLayer_IP() const;
    openstudio::Quantity residualVolumetricMoistureContentoftheSoilLayer_SI() const;
    openstudio::Quantity residualVolumetricMoistureContentoftheSoilLayer_IP() const;
    openstudio::Quantity initialVolumetricMoistureContentoftheSoilLayer_SI() const;
    openstudio::Quantity initialVolumetricMoistureContentoftheSoilLayer_IP() const;
    std::vector<std::string> moistureDiffusionCalculationMethodValues() const;
  };

} // detail

} // model
} // openstudio

#endif // MODEL_ROOFVEGETATION_IMPL_HPP

