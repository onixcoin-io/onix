// Aleth: Ethereum C++ client, tools and libraries.
// Copyright 2014-2019 Aleth Authors.
// Licensed under the GNU General Public License, Version 3.

#include "DatabasePaths.h"
#include "libdevcore/CommonIO.h"
#include "libethcore/Common.h"

namespace dev
{
namespace eth
{
namespace fs = boost::filesystem;

DatabasePaths::DatabasePaths(fs::path const& _rootPath, h256 const& _genesisHash) noexcept
{
    // Allow an empty root path and empty genesis hash since they are required by the tests
    m_rootPath = _rootPath;
#ifdef ONIX_BUILD
    m_chainPath = m_rootPath / fs::path(toHex(_genesisHash.ref().cropped(0, 4))) / fs::path(toString(c_databaseVersion));
#else
    m_chainPath = m_rootPath / fs::path(toHex(_genesisHash.ref().cropped(0, 4)));
#endif
    m_statePath = m_chainPath / fs::path("state");
    m_blocksPath = m_chainPath / fs::path("blocks");

#ifdef ONIX_BUILD
    auto const extrasRootPath = m_chainPath;
#else
    auto const extrasRootPath = m_chainPath / fs::path(toString(c_databaseVersion));
#endif
    m_extrasPath = extrasRootPath / fs::path("extras");
    m_extrasTemporaryPath = extrasRootPath / fs::path("extras.old");
    m_extrasMinorVersionPath = m_extrasPath / fs::path("minor");
}

fs::path const& DatabasePaths::rootPath() const noexcept
{
    return m_rootPath;
}

fs::path const& DatabasePaths::chainPath() const noexcept
{
    return m_chainPath;
}

fs::path const& DatabasePaths::statePath() const noexcept
{
    return m_statePath;
}

fs::path const& DatabasePaths::blocksPath() const noexcept
{
    return m_blocksPath;
}

fs::path const& DatabasePaths::extrasPath() const noexcept
{
    return m_extrasPath;
}

fs::path const& DatabasePaths::extrasTemporaryPath() const noexcept
{
    return m_extrasTemporaryPath;
}

fs::path const& DatabasePaths::extrasMinorVersionPath() const noexcept
{
    return m_extrasMinorVersionPath;
}
}  // namespace eth
}  // namespace dev
