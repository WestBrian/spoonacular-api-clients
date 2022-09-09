# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule com.spoonacular.client.Model.SearchFoodVideos200ResponseVideosInner do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :title,
    :length,
    :rating,
    :shortTitle,
    :thumbnail,
    :views,
    :youTubeId
  ]

  @type t :: %__MODULE__{
    :title => String.t,
    :length => integer(),
    :rating => float(),
    :shortTitle => String.t,
    :thumbnail => String.t,
    :views => integer(),
    :youTubeId => String.t
  }
end

defimpl Poison.Decoder, for: com.spoonacular.client.Model.SearchFoodVideos200ResponseVideosInner do
  def decode(value, _options) do
    value
  end
end
