﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudHSM
{
namespace Model
{
  class DescribeLunaClientResult
  {
  public:
    AWS_CLOUDHSM_API DescribeLunaClientResult();
    AWS_CLOUDHSM_API DescribeLunaClientResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDHSM_API DescribeLunaClientResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the client.</p>
     */
    inline const Aws::String& GetClientArn() const{ return m_clientArn; }

    /**
     * <p>The ARN of the client.</p>
     */
    inline void SetClientArn(const Aws::String& value) { m_clientArn = value; }

    /**
     * <p>The ARN of the client.</p>
     */
    inline void SetClientArn(Aws::String&& value) { m_clientArn = std::move(value); }

    /**
     * <p>The ARN of the client.</p>
     */
    inline void SetClientArn(const char* value) { m_clientArn.assign(value); }

    /**
     * <p>The ARN of the client.</p>
     */
    inline DescribeLunaClientResult& WithClientArn(const Aws::String& value) { SetClientArn(value); return *this;}

    /**
     * <p>The ARN of the client.</p>
     */
    inline DescribeLunaClientResult& WithClientArn(Aws::String&& value) { SetClientArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the client.</p>
     */
    inline DescribeLunaClientResult& WithClientArn(const char* value) { SetClientArn(value); return *this;}


    /**
     * <p>The certificate installed on the HSMs used by this client.</p>
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }

    /**
     * <p>The certificate installed on the HSMs used by this client.</p>
     */
    inline void SetCertificate(const Aws::String& value) { m_certificate = value; }

    /**
     * <p>The certificate installed on the HSMs used by this client.</p>
     */
    inline void SetCertificate(Aws::String&& value) { m_certificate = std::move(value); }

    /**
     * <p>The certificate installed on the HSMs used by this client.</p>
     */
    inline void SetCertificate(const char* value) { m_certificate.assign(value); }

    /**
     * <p>The certificate installed on the HSMs used by this client.</p>
     */
    inline DescribeLunaClientResult& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}

    /**
     * <p>The certificate installed on the HSMs used by this client.</p>
     */
    inline DescribeLunaClientResult& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}

    /**
     * <p>The certificate installed on the HSMs used by this client.</p>
     */
    inline DescribeLunaClientResult& WithCertificate(const char* value) { SetCertificate(value); return *this;}


    /**
     * <p>The certificate fingerprint.</p>
     */
    inline const Aws::String& GetCertificateFingerprint() const{ return m_certificateFingerprint; }

    /**
     * <p>The certificate fingerprint.</p>
     */
    inline void SetCertificateFingerprint(const Aws::String& value) { m_certificateFingerprint = value; }

    /**
     * <p>The certificate fingerprint.</p>
     */
    inline void SetCertificateFingerprint(Aws::String&& value) { m_certificateFingerprint = std::move(value); }

    /**
     * <p>The certificate fingerprint.</p>
     */
    inline void SetCertificateFingerprint(const char* value) { m_certificateFingerprint.assign(value); }

    /**
     * <p>The certificate fingerprint.</p>
     */
    inline DescribeLunaClientResult& WithCertificateFingerprint(const Aws::String& value) { SetCertificateFingerprint(value); return *this;}

    /**
     * <p>The certificate fingerprint.</p>
     */
    inline DescribeLunaClientResult& WithCertificateFingerprint(Aws::String&& value) { SetCertificateFingerprint(std::move(value)); return *this;}

    /**
     * <p>The certificate fingerprint.</p>
     */
    inline DescribeLunaClientResult& WithCertificateFingerprint(const char* value) { SetCertificateFingerprint(value); return *this;}


    /**
     * <p>The date and time the client was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }

    /**
     * <p>The date and time the client was last modified.</p>
     */
    inline void SetLastModifiedTimestamp(const Aws::String& value) { m_lastModifiedTimestamp = value; }

    /**
     * <p>The date and time the client was last modified.</p>
     */
    inline void SetLastModifiedTimestamp(Aws::String&& value) { m_lastModifiedTimestamp = std::move(value); }

    /**
     * <p>The date and time the client was last modified.</p>
     */
    inline void SetLastModifiedTimestamp(const char* value) { m_lastModifiedTimestamp.assign(value); }

    /**
     * <p>The date and time the client was last modified.</p>
     */
    inline DescribeLunaClientResult& WithLastModifiedTimestamp(const Aws::String& value) { SetLastModifiedTimestamp(value); return *this;}

    /**
     * <p>The date and time the client was last modified.</p>
     */
    inline DescribeLunaClientResult& WithLastModifiedTimestamp(Aws::String&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}

    /**
     * <p>The date and time the client was last modified.</p>
     */
    inline DescribeLunaClientResult& WithLastModifiedTimestamp(const char* value) { SetLastModifiedTimestamp(value); return *this;}


    /**
     * <p>The label of the client.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>The label of the client.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_label = value; }

    /**
     * <p>The label of the client.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_label = std::move(value); }

    /**
     * <p>The label of the client.</p>
     */
    inline void SetLabel(const char* value) { m_label.assign(value); }

    /**
     * <p>The label of the client.</p>
     */
    inline DescribeLunaClientResult& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>The label of the client.</p>
     */
    inline DescribeLunaClientResult& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>The label of the client.</p>
     */
    inline DescribeLunaClientResult& WithLabel(const char* value) { SetLabel(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeLunaClientResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeLunaClientResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeLunaClientResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_clientArn;

    Aws::String m_certificate;

    Aws::String m_certificateFingerprint;

    Aws::String m_lastModifiedTimestamp;

    Aws::String m_label;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
