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

#include <aws/apigatewayv2/model/AuthorizationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApiGatewayV2
  {
    namespace Model
    {
      namespace AuthorizationTypeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int AWS_IAM_HASH = HashingUtils::HashString("AWS_IAM");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        AuthorizationType GetAuthorizationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return AuthorizationType::NONE;
          }
          else if (hashCode == AWS_IAM_HASH)
          {
            return AuthorizationType::AWS_IAM;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return AuthorizationType::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthorizationType>(hashCode);
          }

          return AuthorizationType::NOT_SET;
        }

        Aws::String GetNameForAuthorizationType(AuthorizationType enumValue)
        {
          switch(enumValue)
          {
          case AuthorizationType::NONE:
            return "NONE";
          case AuthorizationType::AWS_IAM:
            return "AWS_IAM";
          case AuthorizationType::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthorizationTypeMapper
    } // namespace Model
  } // namespace ApiGatewayV2
} // namespace Aws
