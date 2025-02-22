﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signer/model/SigningJob.h>
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
namespace signer
{
namespace Model
{
  class ListSigningJobsResult
  {
  public:
    AWS_SIGNER_API ListSigningJobsResult();
    AWS_SIGNER_API ListSigningJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIGNER_API ListSigningJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of your signing jobs.</p>
     */
    inline const Aws::Vector<SigningJob>& GetJobs() const{ return m_jobs; }

    /**
     * <p>A list of your signing jobs.</p>
     */
    inline void SetJobs(const Aws::Vector<SigningJob>& value) { m_jobs = value; }

    /**
     * <p>A list of your signing jobs.</p>
     */
    inline void SetJobs(Aws::Vector<SigningJob>&& value) { m_jobs = std::move(value); }

    /**
     * <p>A list of your signing jobs.</p>
     */
    inline ListSigningJobsResult& WithJobs(const Aws::Vector<SigningJob>& value) { SetJobs(value); return *this;}

    /**
     * <p>A list of your signing jobs.</p>
     */
    inline ListSigningJobsResult& WithJobs(Aws::Vector<SigningJob>&& value) { SetJobs(std::move(value)); return *this;}

    /**
     * <p>A list of your signing jobs.</p>
     */
    inline ListSigningJobsResult& AddJobs(const SigningJob& value) { m_jobs.push_back(value); return *this; }

    /**
     * <p>A list of your signing jobs.</p>
     */
    inline ListSigningJobsResult& AddJobs(SigningJob&& value) { m_jobs.push_back(std::move(value)); return *this; }


    /**
     * <p>String for specifying the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>String for specifying the next set of paginated results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>String for specifying the next set of paginated results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>String for specifying the next set of paginated results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>String for specifying the next set of paginated results.</p>
     */
    inline ListSigningJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>String for specifying the next set of paginated results.</p>
     */
    inline ListSigningJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>String for specifying the next set of paginated results.</p>
     */
    inline ListSigningJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SigningJob> m_jobs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
