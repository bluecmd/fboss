/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#include "fboss/agent/hw/bcm/BcmPortQueueManager.h"

namespace facebook { namespace fboss {

std::shared_ptr<PortQueue> BcmPortQueueManager::getCurrentQueueSettings(
    cfg::StreamType /*streamType*/,
    int /*queueIdx*/) const {
  return std::shared_ptr<PortQueue>{};
}

void BcmPortQueueManager::program(
  const std::shared_ptr<PortQueue>& /*queue*/) {}

void BcmPortQueueManager::updateQueueStat(
    int /*queueIdx*/,
    const BcmCosQueueCounterType& /*type*/,
    facebook::stats::MonotonicCounter* /*counter*/,
    std::chrono::seconds /*now*/,
    HwPortStats* /*portStats*/) {}

void BcmPortQueueManager::getAlpha(
    opennsl_gport_t /*gport*/,
    int /*queueIdx*/,
    std::shared_ptr<PortQueue> /*queue*/) const {}

void BcmPortQueueManager::programAlpha(
    opennsl_gport_t /*gport*/,
    int /*queueIdx*/,
    const std::shared_ptr<PortQueue>& /*queue*/) {}

void BcmPortQueueManager::getAqms(
    opennsl_gport_t /*gport*/,
    int /*queueIdx*/,
    std::shared_ptr<PortQueue> /*queue*/) const {}

void BcmPortQueueManager::programAqms(
    opennsl_gport_t /*gport*/,
    int /*queueIdx*/,
    const std::shared_ptr<PortQueue>& /*queue*/) {}
}} // facebook::fboss
