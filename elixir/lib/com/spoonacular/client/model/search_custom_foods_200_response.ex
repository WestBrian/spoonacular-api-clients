# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule com.spoonacular.client.Model.SearchCustomFoods200Response do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :customFoods,
    :type,
    :offset,
    :number
  ]

  @type t :: %__MODULE__{
    :customFoods => [com.spoonacular.client.Model.SearchCustomFoods200ResponseCustomFoodsInner.t],
    :type => String.t,
    :offset => integer(),
    :number => integer()
  }
end

defimpl Poison.Decoder, for: com.spoonacular.client.Model.SearchCustomFoods200Response do
  import com.spoonacular.client.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:customFoods, :list, com.spoonacular.client.Model.SearchCustomFoods200ResponseCustomFoodsInner, options)
  end
end
