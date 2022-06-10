// Copyright 2022 TIER IV, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef LOCALIZATION_SCORE_HPP_
#define LOCALIZATION_SCORE_HPP_

#include <rclcpp/rclcpp.hpp>

#include "autoware_ad_api_msgs/msg/localization_scores.hpp"

namespace default_ad_api
{
using autoware_ad_api_msgs::msg::LocalizationScores;

class LocalizationScoreNode : public rclcpp::Node
{
public:
  explicit LocalizationScoreNode(const rclcpp::NodeOptions & options);

private:
  void callbackLocalizationScores(const LocalizationScores::ConstSharedPtr msg_ptr);

  rclcpp::Publisher<LocalizationScores>::SharedPtr pub_localization_scores_;
  rclcpp::Subscription<LocalizationScores>::SharedPtr sub_localization_scores_;
};

}  // namespace default_ad_api

#endif  // LOCALIZATION_SCORE_HPP_
