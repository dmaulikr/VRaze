/*
 * Copyright 2017 Aldo Culquicondor
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef VRAZE_SCENE_H_
#define VRAZE_SCENE_H_

#include <fplbase/asset_manager.h>
#include <fplbase/renderer.h>

#include "macros.h"
#include "ground.h"
#include "steering.h"

class Scene {
 public:
  explicit Scene(fplbase::AssetManager* asset_manager);
  void Render(fplbase::Renderer* renderer,
              const mathfu::mat4& view_projection_matrix,
              const mathfu::quat& steering);

 private:
  Ground ground_;
  Steering steering_;

  DISALLOW_COPY_AND_ASSIGN(Scene);
};

#endif //VRAZE_SCENE_H_
