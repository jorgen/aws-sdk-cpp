﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/Job.h>
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
namespace MediaConvert
{
namespace Model
{
  class ListJobsResult
  {
  public:
    AWS_MEDIACONVERT_API ListJobsResult();
    AWS_MEDIACONVERT_API ListJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONVERT_API ListJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * List of jobs
     */
    inline const Aws::Vector<Job>& GetJobs() const{ return m_jobs; }

    /**
     * List of jobs
     */
    inline void SetJobs(const Aws::Vector<Job>& value) { m_jobs = value; }

    /**
     * List of jobs
     */
    inline void SetJobs(Aws::Vector<Job>&& value) { m_jobs = std::move(value); }

    /**
     * List of jobs
     */
    inline ListJobsResult& WithJobs(const Aws::Vector<Job>& value) { SetJobs(value); return *this;}

    /**
     * List of jobs
     */
    inline ListJobsResult& WithJobs(Aws::Vector<Job>&& value) { SetJobs(std::move(value)); return *this;}

    /**
     * List of jobs
     */
    inline ListJobsResult& AddJobs(const Job& value) { m_jobs.push_back(value); return *this; }

    /**
     * List of jobs
     */
    inline ListJobsResult& AddJobs(Job&& value) { m_jobs.push_back(std::move(value)); return *this; }


    /**
     * Use this string to request the next batch of jobs.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * Use this string to request the next batch of jobs.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * Use this string to request the next batch of jobs.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * Use this string to request the next batch of jobs.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * Use this string to request the next batch of jobs.
     */
    inline ListJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * Use this string to request the next batch of jobs.
     */
    inline ListJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * Use this string to request the next batch of jobs.
     */
    inline ListJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Job> m_jobs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
