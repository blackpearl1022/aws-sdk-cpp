﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/JobLogEvent.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace drs
  {
    namespace Model
    {
      namespace JobLogEventMapper
      {

        static const int JOB_START_HASH = HashingUtils::HashString("JOB_START");
        static const int SERVER_SKIPPED_HASH = HashingUtils::HashString("SERVER_SKIPPED");
        static const int CLEANUP_START_HASH = HashingUtils::HashString("CLEANUP_START");
        static const int CLEANUP_END_HASH = HashingUtils::HashString("CLEANUP_END");
        static const int CLEANUP_FAIL_HASH = HashingUtils::HashString("CLEANUP_FAIL");
        static const int SNAPSHOT_START_HASH = HashingUtils::HashString("SNAPSHOT_START");
        static const int SNAPSHOT_END_HASH = HashingUtils::HashString("SNAPSHOT_END");
        static const int SNAPSHOT_FAIL_HASH = HashingUtils::HashString("SNAPSHOT_FAIL");
        static const int USING_PREVIOUS_SNAPSHOT_HASH = HashingUtils::HashString("USING_PREVIOUS_SNAPSHOT");
        static const int USING_PREVIOUS_SNAPSHOT_FAILED_HASH = HashingUtils::HashString("USING_PREVIOUS_SNAPSHOT_FAILED");
        static const int CONVERSION_START_HASH = HashingUtils::HashString("CONVERSION_START");
        static const int CONVERSION_END_HASH = HashingUtils::HashString("CONVERSION_END");
        static const int CONVERSION_FAIL_HASH = HashingUtils::HashString("CONVERSION_FAIL");
        static const int LAUNCH_START_HASH = HashingUtils::HashString("LAUNCH_START");
        static const int LAUNCH_FAILED_HASH = HashingUtils::HashString("LAUNCH_FAILED");
        static const int JOB_CANCEL_HASH = HashingUtils::HashString("JOB_CANCEL");
        static const int JOB_END_HASH = HashingUtils::HashString("JOB_END");
        static const int DEPLOY_NETWORK_CONFIGURATION_START_HASH = HashingUtils::HashString("DEPLOY_NETWORK_CONFIGURATION_START");
        static const int DEPLOY_NETWORK_CONFIGURATION_END_HASH = HashingUtils::HashString("DEPLOY_NETWORK_CONFIGURATION_END");
        static const int DEPLOY_NETWORK_CONFIGURATION_FAILED_HASH = HashingUtils::HashString("DEPLOY_NETWORK_CONFIGURATION_FAILED");
        static const int UPDATE_NETWORK_CONFIGURATION_START_HASH = HashingUtils::HashString("UPDATE_NETWORK_CONFIGURATION_START");
        static const int UPDATE_NETWORK_CONFIGURATION_END_HASH = HashingUtils::HashString("UPDATE_NETWORK_CONFIGURATION_END");
        static const int UPDATE_NETWORK_CONFIGURATION_FAILED_HASH = HashingUtils::HashString("UPDATE_NETWORK_CONFIGURATION_FAILED");
        static const int UPDATE_LAUNCH_TEMPLATE_START_HASH = HashingUtils::HashString("UPDATE_LAUNCH_TEMPLATE_START");
        static const int UPDATE_LAUNCH_TEMPLATE_END_HASH = HashingUtils::HashString("UPDATE_LAUNCH_TEMPLATE_END");
        static const int UPDATE_LAUNCH_TEMPLATE_FAILED_HASH = HashingUtils::HashString("UPDATE_LAUNCH_TEMPLATE_FAILED");
        static const int NETWORK_RECOVERY_FAIL_HASH = HashingUtils::HashString("NETWORK_RECOVERY_FAIL");


        JobLogEvent GetJobLogEventForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JOB_START_HASH)
          {
            return JobLogEvent::JOB_START;
          }
          else if (hashCode == SERVER_SKIPPED_HASH)
          {
            return JobLogEvent::SERVER_SKIPPED;
          }
          else if (hashCode == CLEANUP_START_HASH)
          {
            return JobLogEvent::CLEANUP_START;
          }
          else if (hashCode == CLEANUP_END_HASH)
          {
            return JobLogEvent::CLEANUP_END;
          }
          else if (hashCode == CLEANUP_FAIL_HASH)
          {
            return JobLogEvent::CLEANUP_FAIL;
          }
          else if (hashCode == SNAPSHOT_START_HASH)
          {
            return JobLogEvent::SNAPSHOT_START;
          }
          else if (hashCode == SNAPSHOT_END_HASH)
          {
            return JobLogEvent::SNAPSHOT_END;
          }
          else if (hashCode == SNAPSHOT_FAIL_HASH)
          {
            return JobLogEvent::SNAPSHOT_FAIL;
          }
          else if (hashCode == USING_PREVIOUS_SNAPSHOT_HASH)
          {
            return JobLogEvent::USING_PREVIOUS_SNAPSHOT;
          }
          else if (hashCode == USING_PREVIOUS_SNAPSHOT_FAILED_HASH)
          {
            return JobLogEvent::USING_PREVIOUS_SNAPSHOT_FAILED;
          }
          else if (hashCode == CONVERSION_START_HASH)
          {
            return JobLogEvent::CONVERSION_START;
          }
          else if (hashCode == CONVERSION_END_HASH)
          {
            return JobLogEvent::CONVERSION_END;
          }
          else if (hashCode == CONVERSION_FAIL_HASH)
          {
            return JobLogEvent::CONVERSION_FAIL;
          }
          else if (hashCode == LAUNCH_START_HASH)
          {
            return JobLogEvent::LAUNCH_START;
          }
          else if (hashCode == LAUNCH_FAILED_HASH)
          {
            return JobLogEvent::LAUNCH_FAILED;
          }
          else if (hashCode == JOB_CANCEL_HASH)
          {
            return JobLogEvent::JOB_CANCEL;
          }
          else if (hashCode == JOB_END_HASH)
          {
            return JobLogEvent::JOB_END;
          }
          else if (hashCode == DEPLOY_NETWORK_CONFIGURATION_START_HASH)
          {
            return JobLogEvent::DEPLOY_NETWORK_CONFIGURATION_START;
          }
          else if (hashCode == DEPLOY_NETWORK_CONFIGURATION_END_HASH)
          {
            return JobLogEvent::DEPLOY_NETWORK_CONFIGURATION_END;
          }
          else if (hashCode == DEPLOY_NETWORK_CONFIGURATION_FAILED_HASH)
          {
            return JobLogEvent::DEPLOY_NETWORK_CONFIGURATION_FAILED;
          }
          else if (hashCode == UPDATE_NETWORK_CONFIGURATION_START_HASH)
          {
            return JobLogEvent::UPDATE_NETWORK_CONFIGURATION_START;
          }
          else if (hashCode == UPDATE_NETWORK_CONFIGURATION_END_HASH)
          {
            return JobLogEvent::UPDATE_NETWORK_CONFIGURATION_END;
          }
          else if (hashCode == UPDATE_NETWORK_CONFIGURATION_FAILED_HASH)
          {
            return JobLogEvent::UPDATE_NETWORK_CONFIGURATION_FAILED;
          }
          else if (hashCode == UPDATE_LAUNCH_TEMPLATE_START_HASH)
          {
            return JobLogEvent::UPDATE_LAUNCH_TEMPLATE_START;
          }
          else if (hashCode == UPDATE_LAUNCH_TEMPLATE_END_HASH)
          {
            return JobLogEvent::UPDATE_LAUNCH_TEMPLATE_END;
          }
          else if (hashCode == UPDATE_LAUNCH_TEMPLATE_FAILED_HASH)
          {
            return JobLogEvent::UPDATE_LAUNCH_TEMPLATE_FAILED;
          }
          else if (hashCode == NETWORK_RECOVERY_FAIL_HASH)
          {
            return JobLogEvent::NETWORK_RECOVERY_FAIL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobLogEvent>(hashCode);
          }

          return JobLogEvent::NOT_SET;
        }

        Aws::String GetNameForJobLogEvent(JobLogEvent enumValue)
        {
          switch(enumValue)
          {
          case JobLogEvent::JOB_START:
            return "JOB_START";
          case JobLogEvent::SERVER_SKIPPED:
            return "SERVER_SKIPPED";
          case JobLogEvent::CLEANUP_START:
            return "CLEANUP_START";
          case JobLogEvent::CLEANUP_END:
            return "CLEANUP_END";
          case JobLogEvent::CLEANUP_FAIL:
            return "CLEANUP_FAIL";
          case JobLogEvent::SNAPSHOT_START:
            return "SNAPSHOT_START";
          case JobLogEvent::SNAPSHOT_END:
            return "SNAPSHOT_END";
          case JobLogEvent::SNAPSHOT_FAIL:
            return "SNAPSHOT_FAIL";
          case JobLogEvent::USING_PREVIOUS_SNAPSHOT:
            return "USING_PREVIOUS_SNAPSHOT";
          case JobLogEvent::USING_PREVIOUS_SNAPSHOT_FAILED:
            return "USING_PREVIOUS_SNAPSHOT_FAILED";
          case JobLogEvent::CONVERSION_START:
            return "CONVERSION_START";
          case JobLogEvent::CONVERSION_END:
            return "CONVERSION_END";
          case JobLogEvent::CONVERSION_FAIL:
            return "CONVERSION_FAIL";
          case JobLogEvent::LAUNCH_START:
            return "LAUNCH_START";
          case JobLogEvent::LAUNCH_FAILED:
            return "LAUNCH_FAILED";
          case JobLogEvent::JOB_CANCEL:
            return "JOB_CANCEL";
          case JobLogEvent::JOB_END:
            return "JOB_END";
          case JobLogEvent::DEPLOY_NETWORK_CONFIGURATION_START:
            return "DEPLOY_NETWORK_CONFIGURATION_START";
          case JobLogEvent::DEPLOY_NETWORK_CONFIGURATION_END:
            return "DEPLOY_NETWORK_CONFIGURATION_END";
          case JobLogEvent::DEPLOY_NETWORK_CONFIGURATION_FAILED:
            return "DEPLOY_NETWORK_CONFIGURATION_FAILED";
          case JobLogEvent::UPDATE_NETWORK_CONFIGURATION_START:
            return "UPDATE_NETWORK_CONFIGURATION_START";
          case JobLogEvent::UPDATE_NETWORK_CONFIGURATION_END:
            return "UPDATE_NETWORK_CONFIGURATION_END";
          case JobLogEvent::UPDATE_NETWORK_CONFIGURATION_FAILED:
            return "UPDATE_NETWORK_CONFIGURATION_FAILED";
          case JobLogEvent::UPDATE_LAUNCH_TEMPLATE_START:
            return "UPDATE_LAUNCH_TEMPLATE_START";
          case JobLogEvent::UPDATE_LAUNCH_TEMPLATE_END:
            return "UPDATE_LAUNCH_TEMPLATE_END";
          case JobLogEvent::UPDATE_LAUNCH_TEMPLATE_FAILED:
            return "UPDATE_LAUNCH_TEMPLATE_FAILED";
          case JobLogEvent::NETWORK_RECOVERY_FAIL:
            return "NETWORK_RECOVERY_FAIL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobLogEventMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
