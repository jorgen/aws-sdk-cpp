﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
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
namespace ACMPCA
{
namespace Model
{
  class GetCertificateResult
  {
  public:
    AWS_ACMPCA_API GetCertificateResult();
    AWS_ACMPCA_API GetCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACMPCA_API GetCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The base64 PEM-encoded certificate specified by the
     * <code>CertificateArn</code> parameter.</p>
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }

    /**
     * <p>The base64 PEM-encoded certificate specified by the
     * <code>CertificateArn</code> parameter.</p>
     */
    inline void SetCertificate(const Aws::String& value) { m_certificate = value; }

    /**
     * <p>The base64 PEM-encoded certificate specified by the
     * <code>CertificateArn</code> parameter.</p>
     */
    inline void SetCertificate(Aws::String&& value) { m_certificate = std::move(value); }

    /**
     * <p>The base64 PEM-encoded certificate specified by the
     * <code>CertificateArn</code> parameter.</p>
     */
    inline void SetCertificate(const char* value) { m_certificate.assign(value); }

    /**
     * <p>The base64 PEM-encoded certificate specified by the
     * <code>CertificateArn</code> parameter.</p>
     */
    inline GetCertificateResult& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}

    /**
     * <p>The base64 PEM-encoded certificate specified by the
     * <code>CertificateArn</code> parameter.</p>
     */
    inline GetCertificateResult& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}

    /**
     * <p>The base64 PEM-encoded certificate specified by the
     * <code>CertificateArn</code> parameter.</p>
     */
    inline GetCertificateResult& WithCertificate(const char* value) { SetCertificate(value); return *this;}


    /**
     * <p>The base64 PEM-encoded certificate chain that chains up to the root CA
     * certificate that you used to sign your private CA certificate. </p>
     */
    inline const Aws::String& GetCertificateChain() const{ return m_certificateChain; }

    /**
     * <p>The base64 PEM-encoded certificate chain that chains up to the root CA
     * certificate that you used to sign your private CA certificate. </p>
     */
    inline void SetCertificateChain(const Aws::String& value) { m_certificateChain = value; }

    /**
     * <p>The base64 PEM-encoded certificate chain that chains up to the root CA
     * certificate that you used to sign your private CA certificate. </p>
     */
    inline void SetCertificateChain(Aws::String&& value) { m_certificateChain = std::move(value); }

    /**
     * <p>The base64 PEM-encoded certificate chain that chains up to the root CA
     * certificate that you used to sign your private CA certificate. </p>
     */
    inline void SetCertificateChain(const char* value) { m_certificateChain.assign(value); }

    /**
     * <p>The base64 PEM-encoded certificate chain that chains up to the root CA
     * certificate that you used to sign your private CA certificate. </p>
     */
    inline GetCertificateResult& WithCertificateChain(const Aws::String& value) { SetCertificateChain(value); return *this;}

    /**
     * <p>The base64 PEM-encoded certificate chain that chains up to the root CA
     * certificate that you used to sign your private CA certificate. </p>
     */
    inline GetCertificateResult& WithCertificateChain(Aws::String&& value) { SetCertificateChain(std::move(value)); return *this;}

    /**
     * <p>The base64 PEM-encoded certificate chain that chains up to the root CA
     * certificate that you used to sign your private CA certificate. </p>
     */
    inline GetCertificateResult& WithCertificateChain(const char* value) { SetCertificateChain(value); return *this;}

  private:

    Aws::String m_certificate;

    Aws::String m_certificateChain;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
