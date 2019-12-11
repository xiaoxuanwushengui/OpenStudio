/***********************************************************************************************************************
*  OpenStudio(R), Copyright (c) 2008-2019, Alliance for Sustainable Energy, LLC, and other contributors. All rights reserved.
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

#ifndef MODEL_MASSLESSOPAQUEMATERIAL_HPP
#define MODEL_MASSLESSOPAQUEMATERIAL_HPP

#include "ModelAPI.hpp"
#include "OpaqueMaterial.hpp"

namespace openstudio {


namespace model {

namespace detail {

  class MasslessOpaqueMaterial_Impl;

} // detail

/** MasslessOpaqueMaterial is a OpaqueMaterial that wraps the OpenStudio IDD object 'OS:Material:NoMass'. */
class MODEL_API MasslessOpaqueMaterial : public OpaqueMaterial {
 public:
  /** @name Constructors and Destructors */
  //@{

  explicit MasslessOpaqueMaterial(const Model& model,
    std::string roughness = "Smooth",
    double thermalResistance = 0.1);

  virtual ~MasslessOpaqueMaterial() {}

  //@}

  static IddObjectType iddObjectType();

  static std::vector<std::string> roughnessValues();

  /** @name Getters */
  //@{

  std::string roughness() const;

  double thermalConductance() const;

  double thermalResistance() const;

  boost::optional<double> thermalAbsorptance() const;

  bool isThermalAbsorptanceDefaulted() const;

  boost::optional<double> solarAbsorptance() const;

  bool isSolarAbsorptanceDefaulted() const;

  boost::optional<double> visibleAbsorptance() const;

  bool isVisibleAbsorptanceDefaulted() const;

  //@}
  /** @name Setters */
  //@{

  bool setRoughness(std::string roughness);

  bool setThermalConductance(double thermalConductance);

  bool setThermalResistance(double thermalResistance);

  bool setThermalAbsorptance(boost::optional<double> value);

  bool setThermalReflectance(boost::optional<double> value);

  bool setSolarAbsorptance(boost::optional<double> value);

  bool setSolarReflectance(boost::optional<double> value);

  bool setVisibleAbsorptance(boost::optional<double> value);

  bool setVisibleReflectance(boost::optional<double> value);

  bool setThermalAbsorptance(double thermalAbsorptance);

  void resetThermalAbsorptance();

  bool setSolarAbsorptance(double solarAbsorptance);

  void resetSolarAbsorptance();

  bool setVisibleAbsorptance(double visibleAbsorptance);

  void resetVisibleAbsorptance();

  //@}
  /** @name Other */
  //@{

  //@}
 protected:
  /// @cond
  typedef detail::MasslessOpaqueMaterial_Impl ImplType;

  explicit MasslessOpaqueMaterial(std::shared_ptr<detail::MasslessOpaqueMaterial_Impl> impl);

  friend class detail::MasslessOpaqueMaterial_Impl;
  friend class Model;
  friend class IdfObject;
  friend class openstudio::detail::IdfObject_Impl;
  /// @endcond
 private:
  REGISTER_LOGGER("openstudio.model.MasslessOpaqueMaterial");
};

/** \relates MasslessOpaqueMaterial*/
typedef boost::optional<MasslessOpaqueMaterial> OptionalMasslessOpaqueMaterial;

/** \relates MasslessOpaqueMaterial*/
typedef std::vector<MasslessOpaqueMaterial> MasslessOpaqueMaterialVector;

} // model
} // openstudio

#endif // MODEL_MASSLESSOPAQUEMATERIAL_HPP
