/*
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
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devicefarm/DeviceFarmErrors.h>

using namespace Aws::Client;
using namespace Aws::DeviceFarm;
using namespace Aws::Utils;

static const int ARGUMENT_HASH = HashingUtils::HashString("ArgumentException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int SERVICE_ACCOUNT_HASH = HashingUtils::HashString("ServiceAccountException");
static const int IDEMPOTENCY_HASH = HashingUtils::HashString("IdempotencyException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");

namespace Aws
{
namespace DeviceFarm
{
namespace DeviceFarmErrorMapper
{

AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::ARGUMENT), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == SERVICE_ACCOUNT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::SERVICE_ACCOUNT), false);
  }
  else if (hashCode == IDEMPOTENCY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::IDEMPOTENCY), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(DeviceFarmErrors::NOT_FOUND), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace DeviceFarmErrorMapper
} // namespace DeviceFarm
} // namespace Aws
