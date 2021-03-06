﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/codebuild/model/EnvironmentVariableType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace EnvironmentVariableTypeMapper
      {

        static const int PLAINTEXT_HASH = HashingUtils::HashString("PLAINTEXT");
        static const int PARAMETER_STORE_HASH = HashingUtils::HashString("PARAMETER_STORE");


        EnvironmentVariableType GetEnvironmentVariableTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PLAINTEXT_HASH)
          {
            return EnvironmentVariableType::PLAINTEXT;
          }
          else if (hashCode == PARAMETER_STORE_HASH)
          {
            return EnvironmentVariableType::PARAMETER_STORE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentVariableType>(hashCode);
          }

          return EnvironmentVariableType::NOT_SET;
        }

        Aws::String GetNameForEnvironmentVariableType(EnvironmentVariableType enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentVariableType::PLAINTEXT:
            return "PLAINTEXT";
          case EnvironmentVariableType::PARAMETER_STORE:
            return "PARAMETER_STORE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnvironmentVariableTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
