﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/ErrorCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ChimeSDKIdentity
{
namespace Model
{

  /**
   * <p>The request could not be processed because of conflict in the current state
   * of the resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/ConflictException">AWS
   * API Reference</a></p>
   */
  class AWS_CHIMESDKIDENTITY_API ConflictException
  {
  public:
    ConflictException();
    ConflictException(Aws::Utils::Json::JsonView jsonValue);
    ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ErrorCode& GetCode() const{ return m_code; }

    
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    
    inline void SetCode(const ErrorCode& value) { m_codeHasBeenSet = true; m_code = value; }

    
    inline void SetCode(ErrorCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    
    inline ConflictException& WithCode(const ErrorCode& value) { SetCode(value); return *this;}

    
    inline ConflictException& WithCode(ErrorCode&& value) { SetCode(std::move(value)); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ConflictException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ConflictException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ConflictException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    ErrorCode m_code;
    bool m_codeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
