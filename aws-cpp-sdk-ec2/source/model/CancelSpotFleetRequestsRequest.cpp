﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/ec2/model/CancelSpotFleetRequestsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CancelSpotFleetRequestsRequest::CancelSpotFleetRequestsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_spotFleetRequestIdsHasBeenSet(false),
    m_terminateInstances(false),
    m_terminateInstancesHasBeenSet(false)
{
}

Aws::String CancelSpotFleetRequestsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CancelSpotFleetRequests&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << m_dryRun << "&";
  }

  if(m_spotFleetRequestIdsHasBeenSet)
  {
    unsigned spotFleetRequestIdsCount = 1;
    for(auto& item : m_spotFleetRequestIds)
    {
      ss << "SpotFleetRequestId." << spotFleetRequestIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      spotFleetRequestIdsCount++;
    }
  }

  if(m_terminateInstancesHasBeenSet)
  {
    ss << "TerminateInstances=" << m_terminateInstances << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

