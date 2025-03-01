﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/AttributeSuggestionsMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace AttributeSuggestionsModeMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        AttributeSuggestionsMode GetAttributeSuggestionsModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return AttributeSuggestionsMode::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return AttributeSuggestionsMode::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttributeSuggestionsMode>(hashCode);
          }

          return AttributeSuggestionsMode::NOT_SET;
        }

        Aws::String GetNameForAttributeSuggestionsMode(AttributeSuggestionsMode enumValue)
        {
          switch(enumValue)
          {
          case AttributeSuggestionsMode::ACTIVE:
            return "ACTIVE";
          case AttributeSuggestionsMode::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttributeSuggestionsModeMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
