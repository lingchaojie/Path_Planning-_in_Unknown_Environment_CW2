
"use strict";

let AddSoundSource = require('./AddSoundSource.js')
let MoveRobot = require('./MoveRobot.js')
let AddThermalSource = require('./AddThermalSource.js')
let DeleteThermalSource = require('./DeleteThermalSource.js')
let AddRfidTag = require('./AddRfidTag.js')
let DeleteSoundSource = require('./DeleteSoundSource.js')
let LoadExternalMap = require('./LoadExternalMap.js')
let AddCO2Source = require('./AddCO2Source.js')
let LoadMap = require('./LoadMap.js')
let DeleteCO2Source = require('./DeleteCO2Source.js')
let RegisterGui = require('./RegisterGui.js')
let DeleteRfidTag = require('./DeleteRfidTag.js')

module.exports = {
  AddSoundSource: AddSoundSource,
  MoveRobot: MoveRobot,
  AddThermalSource: AddThermalSource,
  DeleteThermalSource: DeleteThermalSource,
  AddRfidTag: AddRfidTag,
  DeleteSoundSource: DeleteSoundSource,
  LoadExternalMap: LoadExternalMap,
  AddCO2Source: AddCO2Source,
  LoadMap: LoadMap,
  DeleteCO2Source: DeleteCO2Source,
  RegisterGui: RegisterGui,
  DeleteRfidTag: DeleteRfidTag,
};
