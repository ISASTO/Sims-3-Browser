"""Shared checkout location; tools also work when invoked outside the repository."""
from pathlib import Path

ROOT = str(Path(__file__).resolve().parent.parent)
